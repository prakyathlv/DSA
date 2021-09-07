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
int get(struct array *arr,int index)
{
	return arr->a[index];
}
int set(struct array *arr,int index,int n)
{
	arr->a[index]=n;
	return 0;
}
int max(struct array arr)
{
	int i=0,max=arr.a[0];
	for(i=0;i<arr.length;i++)
	if(arr.a[i]>max)
	max=arr.a[i];
	return max;
}
int min(struct array arr)
{
	int i=0,min=arr.a[0];
	for(i=0;i<arr.length;i++)
	if(arr.a[i]<min)
	min=arr.a[i];
	return min;
}
int sum(int *a,int n)
{
	if(n<0)
	return 0;
	else
	return sum(&a,n-1)+a[n];
	
}
int avg(struct array arr)
{
	int i,total=0;
	for(i=0;i<arr.length;i++)
	total+=arr.a[i];
	return total/arr.length;
}
int main()
{
	struct array arr1={{2,8,40,1,3,54,7	},10,7};
	display(arr1);
	printf("%d\n",get(&arr1,4));
	printf("%d\n",set(&arr1,4,50));
	printf("%d\n",max(arr1));
	printf("%d\n",min(arr1));
	printf("%d\n",sum(&arr1.a,arr1.length));
	printf("%d\n",avg(arr1));
	return 0;
	
}
