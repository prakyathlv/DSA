#include<stdio.h>
int sum(int n)
{
	
	if(n<1)
	return 0;
	else

	return sum(n-1)+n;
	
}
int main()
{
	int a=sum(10);
		printf("%d",a);
}
