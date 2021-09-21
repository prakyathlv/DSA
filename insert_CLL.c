#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;
void create(int a[],int n)
{
	int i;
	struct node *t,*last;
	head=(struct node *)malloc(sizeof(struct node));
	head->data=a[0];
	head->next=head;
	last=head;
	for(i=1;i<n;i++)
	{
		t=(struct node *)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=head;
		last->next=t;
		last=t;
	}
}
void display(struct node *p)
{
	printf("display\n");
	do
	{
		printf("%d ",p->data);
		p=p->next;
	}
	while(p!=head);
	printf("\n");
}
void Rdisplay(struct node *p)
{
	static int flag=0;
	if(p!=head||flag==0)
	{
		flag=1;
		printf("%d ",p->data);
		Rdisplay(p->next);
	}
	flag=0;
	printf("\n");
}
void insert(int value,int index)
{
	if(index<0||index>length())  return;
	struct node *p=head,*t=(struct node *)malloc(sizeof(struct node));
	if(index==0)
	{
		if(head=NULL)
		{
			head->data=value;
			head->next=head;
		}
		else
		{
			while(p->next!=head)
			p=p->next;
			p->next=t;
			t->next=head;
			head=t;
		}
	}
	else
	{
		int i;
		for(i=0;i<index-1;i++)
		p=p->next;
		t=(struct node *)malloc(sizeof(struct node));
		t->data=value;
		t->next=p->next;
		p->next=t;	
	}
}
int length()
{
	int count=0;
	struct node *p=head;
	do
	{
		count++;
		p=p->next;
	}
	while(p->next!=head);
	return count;
}
int main()
{
	int value,index,a[]={1,2,3,4,5,6};
	create(a,6);
	display(head);
	Rdisplay(head);
	do
	{
		printf("enter the value and index to be inserted\n");
		scanf("%d%d",value,index);
		insert(value,index);
		display(head);
	}
	while(index<length());
}
