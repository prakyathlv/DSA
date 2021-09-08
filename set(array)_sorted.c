#include<stdio.h>
#include<stdlib.h>
struct array 
{
	int a[10];
	int length;
	int size;
};
void display(struct array arr)
{
	int i;
	for(i=0;i<arr.length;i++)
	printf("%d ",arr.a[i]);
	printf("\n");
}
struct array *uni(struct array *arr1,struct array *arr2)
{
	int i=0,j=0,k=0;
	struct array *arr3=(struct array*)malloc(sizeof(struct array));
//	for(i=0,k=0;i<arr1->length;++i,++k)
//	{
//		arr3->a[k]=arr1->a[i];
//	}
for(i=0;i<arr1->length;i++)
{
	k=i;
	arr3->a[i]=arr1->a[i];
}
    for(j=0;j<arr2->length;j++)
    {
    	for(i=0;i<arr1->length;i++)
    	{
    		if(arr1->a[i]=arr2->a[j])
    		break;
		}
		arr3->a[k++]=arr2->a[j];
	}
	arr3->length=k;
	arr3->size=10;
	return arr3;
}
struct array *inter(struct array *arr1,struct array *arr2)
{
	int i=0,j=0,k=0;
	struct array *arr4=(struct array*)malloc(sizeof(struct array));
	for(i=0;i<arr1->length;i++)
	{
		for(j=0;j<arr2->length;j++)
		{
			if(arr1->a[i]==arr2->a[j])
			{
			arr4->a[k++]=arr2->a[j];
			break;
			}
		}
	}
	arr4->length=k;
	arr4->size=10;
	return arr4;
}
int main()
{
	struct array arr1={{2,78,13,41,8	},5,10	};
	struct array arr2={{43,2,63,45,8	},5,10	};
	display(arr1);
	display(arr2);
	struct array *arr3=uni(&arr1,&arr2);
	display(*arr3);
	printf("\n\n\n");
	struct array *arr4=inter(&arr1,&arr2);
	display(*arr4);
	return 0;
}

