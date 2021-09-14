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
void create(struct sparse *s)
{
	int i;
	printf("enter the dimensions of sparse matrix\n");
	scanf("%d%d",&s->m,&s->n);
	printf("enter the number of non zero elements in sparse matrix\n");
	scanf("%d",s->num);
	s->e=(struct element *)malloc(s->num*sizeof(struct sparse));
	printf("enter the all row index:column index:element of sparse matrix one by one\n");
	for(i=0;i<s->num;i++)
	scanf("%d%d%d",s->e[i].i,s->e[i].j,s->e[i].x);
}
struct sparse * add(struct sparse *s1,struct sparse *s2)
{
	int i=0,j=0,k=0;
	if(s1->n!=s2->n||s1->m!=s2->m)
	return 0;
	struct sparse *s=(struct sparse *)malloc((s1->n)*sizeof(struct sparse));
	s->e=(struct element *)malloc((s1->num+s2->num)*sizeof(struct element));
	while(i<s1->num&&j<s2->num)
	{
		if(s1->e[i].i<s2->e[j].i)
		s->e[k++]=s1->e[i++];
		else if(s1->e[i].i>s2->e[j].i)
		s->e[k++]=s2->e[j++];
		else
		{
		 if(s1->e[i].j<s2->e[j].j)
		 s->e[k++]=s1->e[i++];
		 else if(s1->e[i].j>s2->e[j].j)
		 s->e[k++]=s2->e[j++];
		 else
		 s->e[k++].x=s1->e[i++].x+s2->e[j++].x;
		}
	}
	return s;
}
void display(struct sparse *s)
{
	int i,j;
	for(i=0;i<s->m;i++)
	{
		for(j=0;j<s->n;j++)
		{
			if(i==s->e[i].i&&j==s->e[i].j)
			printf("%d ",s->e[i].x);
			else
			printf("0 ");
		}
		printf("\n");
	}
}
int main()
{
	struct sparse s1,s2,*s;
	create(&s1);
	printf("\n\n");
	create(&s2);
	s=add(&s1,&s2);
	display(*s);
	return 0;
}
