#include<stdio.h>
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
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int binSearch(struct array *arr,int key)
{
	int l=0,h=arr->length-1;
	while(l<=h)
	{
	int mid=(l+h)/2;
		if(key=arr->a[mid])
		{
		return mid;
		swap(&arr->a[mid],&arr->a[mid-1]);
		}
		else if(key<arr->a[mid])
		h=mid-1;
		else
		l=mid+1;
	}
	return -1;
}
int main()
{
	struct array arr1={{5,7,9,12,14,25,34,78},8,8};
	display(arr1);
	printf("%d\n",binSearch(&arr1,9));
	display(arr1);
	return 0;
	
}
