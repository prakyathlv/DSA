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
int search(struct array *arr,int key)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
	if(key==arr->a[i])
	{
	swap(&arr->a[i],&arr->a[i-1]);
	return i;
    }
    }
    return -1;
}
int main()
{
	struct array arr1={{1,4,12,2,8	},10,5	};
	display(arr1);
	int x=search(&arr1,4);
	printf("%d\n",x);
	display(arr1);
	
	return 0;
}
