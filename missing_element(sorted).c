#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,size,*a;
	printf("enter the array size\n");
	scanf("%d",&size);
	a=(int *)malloc(size*sizeof(int));	
	printf("enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}	
	printf("\n");
	int diff=a[0];
	printf("missing elements are\n");
	for(i=0;i<size;i++)
	{
		if((a[i]-i)!=diff)
		{
			while(diff<(a[i]-i))
			{
			printf("%d ",i+diff);
			diff++;
			}
		}
	}
	return 0; 
	
}
