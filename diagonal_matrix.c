#include<stdio.h>
#include<stdlib.h>
struct array 
{
	int *arr;
	int size;
};
void set(struct array a[],int i,int j,int x)
{
	if(i==j)
	a->arr[i-1]=x;
}
int get(struct array a[],int i,int j)
{
	if(i==j)
	return a->arr[i=1];
	else
	return 0;
}
int main()
{
	int i;
	struct array a;
	printf("enter the diagonal size of array\n");
	scanf("%d",&a.size);
	a.arr=(int *)malloc(a.size*sizeof(int));
	set(&a,1,1,1);
	set(&a,2,2,2);
	set(&a,3,3,3);
	set(&a,5,5,5);
	set(&a,4,4,4);
	printf("%d\n",get(&a,3,3));
	for(i=0;i<a.size;i++)
	{
		printf("%d ",a.arr[i]);
	}
	return 0;
}
