 #include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,size,*a,*b;
	printf("enter the array size\n");
	scanf("%d",&size);
	a=(int *)malloc(size*sizeof(int));	
	printf("enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		max=a[i];
	}	
	printf("\n");
	b=(int *)malloc(max*sizeof(int));
	for(i=0;i<size;i++)
	{
		b[a[i]]++;
	}
	printf("missing elements are\n");
	for(i=0;i<=max;i++)
	{
		if(b[i]==0)
		printf("%d ",i);
	}
	return 0;
}
	
	
