#include<iostream>
using namespace std;
class term 
{
	public:
		int coeff;
		int exp;
};
class poly
{
	int n;
	term *s;
	public:
		poly(int n)
		{
			this->n=n;
			s=new term[n];
		}
		~poly()
		{
			delete []s;
		}
		void read();
		void display(int x);
		friend void operator+(poly p1,poly p2);
		
};
 void operator+(poly p1,poly p2)
		{
			poly p3(10);
			int i,j,k=0;
			while(i<p1.n&&j<p2.n)
			{
				if(p1.s[i].exp<p2.s[j].exp)
				p3.s[k++]=p2.s[j++];
				else if(p1.s[i].exp>p2.s[j].exp)
				p3.s[k++]=p1.s[i++];
				else
				{
					p3.s[k].exp=p1.s[i++].exp;
					p3.s[k].coeff=p3.s[k++].coeff+p2.s[j++].exp;
				}
			}
		}
void poly::read()
{
	int i;
	cout<<"enter the coefficient and exponent of polynomil terms\n";
	for(i=0;i<n;i++)
	{
		cout<<"enter term no. "<<i+1<<"\n";
		cin>>s[i].coeff>>s[i].exp;	
	} 
} 
void poly::display(int x)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		cout<<s[i].coeff<<"*"<<x<<"^"<<s[i].exp<<"+";
	}
}

int main()
{
	int n,m,x;
	cout<<"enter the number of terms in first & second polynomial\n";
	cin>>n>>m;
	poly p1(n),p2(m),p3(n+m);
	p1.read();
	p2.read();
	cout<<"enter x value\n";
	cin>>x;
	p1.display(x);
	cout<<"\n";
	p2.display(x);
	p1+p2;
	cout<<"\n";
	return 0;
}
