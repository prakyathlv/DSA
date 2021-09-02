#include<stdio.h>
void funB(int);
void funa(int n)
{
		if(n>0)
	{
		printf("%d ",n);
		funB(n-1);
	}
}
void funB(int n)
{
		if(n>0)
	{
		printf("%d ",n);
		funa(n/2);
	}	
}
int main()
{
	funa(20);
}
