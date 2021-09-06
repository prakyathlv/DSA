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
void delete(struct array *arr,int index)
{
	if(index>0&&index<arr->length){
	
	int i,x;
	x==arr->a[index];
	for(i=index;i<arr->a[arr->length-1];i++)
	{
		arr->a[i]=arr->a[i+1];
	}
	arr->length--;
}
}


int main()
{

    struct array arr1={{2,3,4,5,6},10,5};
	display(arr1);
	delete(&arr1,2);
	display(arr1);
}
