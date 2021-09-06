#include<stdio.h>
#include<stdlib.h>
struct array
{
	int *a;
	int size;
	int length;
};
void display(struct array arr)
{
	int i;
	printf("the array elements are\n");
	for(i=0;i<arr.length;i++)
	printf("%d",arr.a[i]);
}
int main()
{
	struct array arr;
	int i;
	printf("enter the size of array\n");
	scanf("%d",&arr.size);
	arr.a=(int *)malloc(arr.size*sizeof(int));
	printf("enter the number of elements\n");
	scanf("%d",arr.length);
	printf("enter the array elements\n ");
	for(i=0;i<arr.length;i++)
	scanf("%d",&arr.a[i]);
	display(arr);
	return 0;
}
