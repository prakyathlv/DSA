#include<stdio.h>
#include<stdlib.h>
struct element
{
	int i;
	int j;
	int x;
};
struct sparse
{
	int m;
	int n;
	int num;
	struct element *e;
};
create(struct sparse *s)
{
	int i;
	printf("enter the dimension of sparse matrix\n");
	scanf("%d%d",&s->m,&s->n);
	printf("enter the number of non zero elements sparse matrix\n");
	scanf("%d",&s->num);
	s->e=(struct element *)malloc(s->num*sizeof(struct element));
	printf("enter all elments in order row index:column index:element\n");
	for(i=0;i<s->num;i++)
	scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
}
int display(struct sparse *s)
{
	int i,j,k=0;
	for(i=0;i<s->num;i++)
	{
		for(j=0;j<s->num;j++)
		{
			if((i=s->e[k].i)&&(j=s->e[k].j))
			printf("%d ",s->e[k++].x);
			else
			printf("0 ");
		}
		printf("\n");
	}
}
int main()
{
	struct sparse s;
	create(&s);
	display(&s);
	return 0;
}
