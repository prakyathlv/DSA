#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
}*first=NULL;
void create(int a[],int n)
{
	struct node *t,*last;
	int i;
	first=(struct node *)malloc(sizeof(struct node));
	first->prev=t->next=NULL;
	first->data=a[0];
	last=first;
	for(i=1;i<n;i++)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t;
	}
}
int length(struct node *p)
{
	int len=0;
	while(p)
	{
		len++;
		p=p->next;
	}
	return len;
}
void display(struct node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
int main()
{
	int a[]={1,2,3,4,5};
	create(a,5);
	int x=length(first);
	printf("length of the DLL is %d",x);
	display(first);
	return 0;
}
