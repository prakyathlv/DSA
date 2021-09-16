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
	struct node *last,*t;
	first=(struct node *)malloc(sizeof(struct node));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;		
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
int count(struct node *p)
{
	int c=0;
	while(p)
	{
		c++;
		p=p->next;
	}
	return c;
}
int add(struct node *p)
{
	int sum=0;
	while(p)
	{
		sum+=p->data;
		p=p->next;
	}
	return sum;
}
int main()
{
	int a[5]={1,2,3,4,5};
	create(a,5);
	display(first);
	printf("total number of nodes: %d\n",count(first));
	printf("sum of data of all nodes: %d\n",add(first));
	return 0;
}
