#include<stdio.h>
#include<stdlib.h>
struct array 
{
	int a[10];
	int size;
	int length;
};
void display(struct array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	printf("%d ",arr.a[i]);
	printf("\n");
}
struct array *merge(struct array *arr1,struct array *arr2)
{
	int i=0,j=0,k=0;
	struct array *arr3=(struct array *)malloc(sizeof(struct array));
	arr3->length=arr1->length+arr2->length;
	arr3->size=10;
	while(i<arr1->length&&j<arr2->length)
	{
		if(arr1->a[i]<arr2->a[j])
		arr3->a[k++]=arr1->a[i++];
		else
		arr3->a[k++]=arr2->a[j++];
	}
	for(;i<arr1->length;i++)
	arr3->a[k++]=arr1->a[i];
	for(;j<arr2->length;j++)
	arr3->a[k++]=arr2->a[j];
	return arr3;
}
int main()
{
	struct array arr1={{1,3,5,7,9},10,5};
	struct array arr2={{2,4,6,8,10},10,5};
	struct array *arr3=merge(&arr1,&arr2);
	display(arr1);
	display(arr2);
	display(*arr3);
	return 0;
	
}
