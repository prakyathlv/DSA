#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
	int size;
	int top;
	char *s;
};
void create(struct stack *st)
{
	printf("enter the size of stack\n");
	scanf("%d",&st->size);
	st->top=-1;
	st->s=(char *)malloc(st->size*sizeof(char));
}
void display(struct stack st)
{
	int i;
	for(i=st.top;i>0;i--)
	{
		printf("%d\n",st.s[i]);
	}
}
void push(struct stack *st,char x)
{
	if(st->top==st->size-1)
	printf("stack overflow\n");
	else
	st->top++;
	st->s[st->top]=x;	
}
int pop(struct stack *st)
{
	char x=-1;
	if(st->top==-1)
	printf("stack underflow\n");
	else
	{
		x=st->top;
		st->top--;
	}
}
int isFull(struct stack st)
{
	if(st.top==st.size-1)
	return 1;
	else return 0;
}
int isEmpty(struct stack st)
{
	if(st.top==-1) return 1;
	else return 0;
}
int stackTop(struct stack st)
{
	if(isEmpty(st))
	return 0;
	else
	printf("%d\n",st.s[st.top]); 
}
int peek(struct stack st,int pos)
{
	if(st.top-pos+1<0&&st.top-pos+1>st.top)
	return 0;
	else
	printf("%d\n",st.top-pos+1);
}
int isBalance(char *exp)
{
	int i;
	struct stack st;
	st.size=strlen(exp);
	st.top=-1;
	st.s=(char *)malloc(st.size*sizeof(char));
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]='(') push(&st,'(');
		else if(exp[i]=')')
		{
			if(isEmpty(st)) return 0;
			else pop(&st);
		}
	}
	return isEmpty(st)?1:0;
}
int main()
{
/*	struct stack st;
	create(&st);
//	display(st);
	push(&st,10);
	push(&st,20);
	push(&st,30);
	push(&st,40);
	display(st);
	pop(&st);
	pop(&st);
	int x=isFull(st);
	if(x) printf("stack is full\n");
	else printf("stck is not full\n");
	x=isEmpty(st);
	if(!x) printf("stack is empty\n");
	else printf("stck is not empty\n");
	display(st);
	stackTop(st);
	peek(st,2);	*/
	char *exp="((a+b)*(a-b)))";
	if(isBalance(exp))
	printf("parenthesis balenced\n");
	else
	printf("parenthesis unbalenced\n");
	return 0;
}
