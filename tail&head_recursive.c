#include<stdio.h>
void fun1(int n)
{
	if(n>0)
	{
	
	fun1(n-1);
	printf("%d ",n);
	}
}
void fun2(int n)
{
	if(n>0)
	{
	
	printf("%d ",n);
	fun2(n-1);
 	}
}
int main()
{
	fun1(3);
	printf("\n");
	fun2(3);
	return 0;
}

