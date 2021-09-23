#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void display()
{
	struct node *p=top;
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void push(int x)
{
	struct node *t=(struct node*)malloc(sizeof(struct node));
	t->data=x;
	t->next=top;
	top=t;
}
int pop()
{
	int x;
	struct node *p;
	if(isEmpty())
	x=-1;
	else
	{
	p=top;
	x=p->data;
	top=top->next;
	free(p);
	}
	return x;
}
int peek(int x)
{
	struct node *p=top;
	int i;
	for(i=0;i<x-1&&p;i++)
	{
		p=p->next;
	}
	printf("%d\n",p->data);
}
int isFull()
{
	struct node *t=(struct node *)malloc(sizeof(struct node));
	int r=t?1:0;
	free(t);
	return r;
}
int isEmpty()
{
	return top?0:1;
}
int stackTop()
{
	return top->data;
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	pop();
	pop();
	display();
	peek(2);
	if(isFull)
	printf("stack is full\n");
	else
	printf("stack is not full\n");
	isEmpty()?printf("stack is empty\n"):printf("stack is not empty\n");
	printf("present top of the stack is %d\n",stackTop);
	return 0;
}
