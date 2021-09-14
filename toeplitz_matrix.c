#include<stdio.h>
#include<stdlib.h>
struct matrix
{
	int *a;
	int size;
};
int main()
{
	int i,j;
	struct matrix arr;
	printf("enter the size of matrix\n");
	scanf("%d",&arr.size);
	arr.a=(int *)malloc((arr.size+arr.size+1)*sizeof(int));
	printf("enter the first row elements of toeplitz matrix\n");
	for(i=0,j=0;j<arr.size;j++)
	{
	printf("enter m[%d][%d] element\n",i,j);
	scanf("%d",&arr.a[j]);
	}
	for(i=0,j=0;i<arr.size;i++)
	{
	printf("enter m[%d][%d] element\n",i,j);
	scanf("%d",&arr.a[arr.size+i]);
	}	
	for(i=0;i<arr.size;i++)
	{
		for(j=0;j<arr.size;j++)
		{
			if(i<=j)
			printf("%d ",arr.a[j-i]);
			else
			printf("%d ",arr.a[arr.size+i-j-1]);
		}
		printf("\n");
	}
	return 0;
}
