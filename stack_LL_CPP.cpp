#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	struct node *next;
};
class stack
{
	private:
		node *top;
	public:
		stack()
		{
			top=NULL;
		}
		void display();
		void push(int x);
		int pop();
};
void stack::display()
{
	node *p=top;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}
void stack::push(int x)
{
	node *t=new node;
	t->data=x;
	t->next=top;
	top=t;
}
int stack::pop()
{
	int x;
	node *p;
	if(top==0)
	x=-1;
	else
	{
	p=top;
	x=p->data;
	top=top->next;
	delete p;
	}
	return x;
}
int main()
{
	stack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.display();
	st.pop();
	st.pop();
	st.display();
}
