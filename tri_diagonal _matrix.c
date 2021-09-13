#include<stdio.h>
#include<stdlib.h>
struct matrix
{
	int *a;
	int size;
};
void set(struct matrix *s,int i,int j,int x)
{
	switch(i-j)
	{
		case 1:s->a[i-2]=x;break;
		case 0:s->a[s->size+i-2]=x;break;
		case -1:s->a[2*s->size+i-2]=x;break;
	}
}
int get(struct matrix *s,int i,int j)
{
	switch(i-j)
	{
		case 1:return (s->a[i-2]);break;
		case 0:return (s->a[s->size+i-2]);break;
		case -1:return (s->a[2*s->size+i-2]);break;
	}
}
int display(struct matrix *s)
{
	int i,j;
	for(i=0;i<s->size;i++)
	{
		for(j=0;j<s->size;j++)
		{
		switch(i-j)
			{
			 case 1:printf("%d ",(s->a[i-2]));break;
			 case 0:printf("%d ",(s->a[s->size+i-2]));break;
			 case -1:printf("%d ",(s->a[2*s->size+i-2]));break;
			 default:printf("0 ");
		    }
		}
		printf("\n");
	}
}
int main()
{
	int n,i,j,x;
	struct matrix arr;
	printf("enter the size of matrix\n");
	scanf("%d",&arr.size);
	arr.a=(int *)malloc((3*arr.size-2)*sizeof(int));
	printf("enter the all elements off tridiogonal matrix\n");
	for(i=0;i<arr.size;i++)
	{
		for(j=0;j<arr.size;j++)
		{
			if(abs(i-j)<=1)
			{
			printf("enter m[%d][%d]:\n",i,j);
			scanf("%d",&x);
			set(&arr,i,j,x);
			}
		}
	}
	printf("if you want to get any particular element mention the indeces\n");
	scanf("%d %d",i,j);
	if(abs(i-j)<=1)
	{
	printf("%d\n",get(&arr,i,j));
	}
	else{printf("0\n");	}
	display(&arr);
	return 0;
}
