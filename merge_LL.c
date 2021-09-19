#include <stdio.h>
#include <stdlib.h>
struct Node
{
 int data;
 struct Node *next;
}*first=NULL;
struct Node * create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
 return first;
}
void concat(struct Node *A,struct Node *B)
{
	struct Node *p=first;
	while(p->next=NULL)
	{
		p=p->next;
	}
	p->next=B;
	B=NULL;
}
struct Node * merge(struct Node *A,struct Node *B)
{
	struct Node *last=NULL,*third=NULL;
	if(A->data<B->data)
	{
		last=third=A;
		A=A->next;
		last->next=NULL;
	}
	else
	{
		last=third=B;
		B=B->next;
		last->next=NULL;
	}
	while(A&&B)
	{
	if(A->data<B->data)
	{
		last->next=A;
		last=A;
		A=A->next;
		last->next=NULL;
	}
	else
	{
		last->next=B;
		last=B;
		B=B->next;
		last->next=NULL;
	}
	}
	if(A=NULL) last->next=B;
	else last->next=A;
	return third;
}
void Display(struct Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
}
int main()
{
 struct Node *temp;
 int A[]={3,5,7,10,25,8,32,2};
 int B[]={4,2,9,7,2.5,1,6};
 struct Node * a,* b;
 a=create(A,8);
 Display(a);
 b=create(B,7);
 Display(b);
 
 
 concat(a,b);
 Display(b);
 
 //Display(merge(a,b));
 
 
 
 return 0;
}
