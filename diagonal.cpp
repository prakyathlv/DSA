#include<iostream>
using namespace std;
class diagonal
{
	private:
		int n;
		int *a;
	public:
		diagonal(int n)
		{
			this->n=n;
			a=new int(n);
		}
		void set(int i,int j,int x);
		int get(int i,int j);
		void display();
		~diagonal()
		{
			delete []a;
		}
};
void diagonal::set(int i,int j,int x)
{
	if(i==j)
	a[i-1]=x;
}
int diagonal::get(int i,int j)
{
	if(i==j)
	return a[i-1];
	else return 0;
}
void diagonal::display()
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int main()
{
	int n;
	printf("enter the size of matrix\n");
	cin>>n;
	diagonal matrix(n);
	matrix.set(1,1,1);
	matrix.set(2,2,2);
	matrix.set(3,3,3);
	matrix.set(4,4,4);
	matrix.set(5,5,5);
	cout<<matrix.get(1,1)<<"\n";
	matrix.display();
	return 0;
}
