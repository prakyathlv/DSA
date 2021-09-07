#include<stdio.h>
int main()
{
	int a[10]={5,1,4,36,4,2};
	int temp,i,j,length=6,size=10,b[10];
	for(i=0;i<length;i++)
	printf("%d ",a[i]);
	for(i=length-1,j=0;i>=0;i--,j++)
	b[j]=a[i];
	for(i=0;i<length;i++)
	a[i]=b[i];
	printf("\nreversed array elements using auxillary array\n ");
	for(i=0;i<length;i++)
	printf("%d ",a[i]);
	
	
	for(i=0,j=length-1;i<length;i++,j--){
	temp=a[i];
	a[i]=b[j];
	b[j]=temp;
	}
	printf("\nreversed array elements using swap\n");
	for(i=0;i<length;i++)
	printf("%d ",a[i]);
	return 0;
}
