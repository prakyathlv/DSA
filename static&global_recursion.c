#include<stdio.h>
int fun(int n)
{
	static int x;
	if(n>0)
	{
		x++;
		return fun(n-1)+x;
	}
	return 0;
}
int main()
{
	fun(5);
	printf("%d",fun(5));
	return 0;
}
