#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,size,*a;
	printf("enter the array size\n");
	scanf("%d",&size);
	a=(int *)malloc(size*sizeof(int));	
	printf("enter the array elements\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}	
	printf("\n");
	int j=0;
	printf("repeated elements are\n");
	for(i=0;i<size-1;i++)
	{
		if(a[i]==a[i+1]){
		j=i+1;
		while(a[j]==a[i])j++;
		printf("%d is repeated %d times\n",a[i],j-i);
		i=j-1;
		}
	}
	return 0;
}
