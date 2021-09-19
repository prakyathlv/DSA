#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*first=NULL;
void create(int *a,int n)
{
	int i;
	struct node *t,*last,*p=first;
	t=malloc(sizeof(struct node));
	t->data=a[0];
	t->next=NULL;
	first=last=t;
	for(i=1;i<n;i++)
	{
		struct node *t,*last,*p=first;
		t->data=a[i];
		t->next=NULL;
		last->next=t;	
	}
}
void reverse(struct node *p)
{
	int i=0;
	int a[10]={0};
	while(p)
	{
		a[i++]=p->data;
		p=p->next;
	}
	i--;
	while(p)
	{
		p->data=a[i--];
		p=p->next;
	}
}
void reversel(struct node *p)
{
	struct node *r=NULL,*q=NULL;
	while(p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
}
void reverselr(struct node *q,struct node *p)
{
	if(p!=NULL)
	{
		reverselr(p,p->next);
		p->next=q;
	}
	else
	{
		first=q;
	}
}
void display(struct node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;	
	}	
}
int main()
{
	int a[10]={1,2,3,4,5};
	create(a,5);
	reverse(first);
	display(first);
	printf("\n");
	reversel(first);
	display(first);
	printf("\n");
	reverselr(NULL,first);
	display(first);
	printf("\n");
	return 0;
}
