#include<stdio.h>
#include<stdlib.h>
#define n a.rowSize
struct array 
{
	int *arr;
	int rowSize;
	int colSize;
};
void set(struct array a[],int i,int j,int x)
{
	a->arr[(i*(i-1))/2+(j-1)]=x;
}
int get(struct array a[],int i,int j)
{
	if(!(i<j))
	return a->arr[(i*(i-1))/2+(j-1)];
	else
	return 0;
}
int main()
{
	int i,j,x;
	struct array a;
	printf("enter the row and column size of matrix\n");
	scanf("%d%d",&a.rowSize,&a.colSize);
	if(a.rowSize!=a.colSize)
	{
	printf("its not a square matrix\n");
	return 0;
	}
	a.arr=(int *)malloc(a.rowSize*sizeof(int));
	for(i=0;i<a.rowSize;i++)
	{
	for(j=0;j<a.colSize;j++)
	 {
	if(i<j){continue;}
	else
		{
			printf("enter m[%d][%d] of lower triangular matrix:\n",i,j);
			scanf("%d",&x);
			set(&a,i,j,x);		
		}
	 }
	}
	printf("%d\n\n\n",get(&a,1,3));
	for(i=0;i<n*(n+1)/2;i++)
	{
		printf("%d ",a.arr[i]);
    }
}
