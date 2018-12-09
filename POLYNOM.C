#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct poly
{
	int c,n;
	struct poly* next;
}*p1,*p2,*t,*nn,*r,*rp;
struct poly* create(struct poly* start,int a,int b)
{
	struct poly *ptr,*nr;
	if(start==NULL)
	{
		nr=(struct poly*)malloc(sizeof(struct poly));
		nr->c=a;
		nr->n=b;
		start=nr;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		nr=(struct poly*)malloc(sizeof(struct poly));
		nr->c=a;
		nr->n=b;
		ptr->next=nr;
	}
	return start;
}
int x,y,ch,l1,l2,i;
void main()
{
	clrscr();
	printf("\nEnter the length of first polynomial");
	scanf("%d",&l1);
	for(i=0;i<l1;i++)
	{
		printf("\nEnter data");
		scanf("%d",&y);
		printf("\nEnter Coeffecient");
		scanf("%d",&x);
		p1=create(p1,x,y);
	}
	t=p1;
	printf("\nPolynomials before\n");
	while(t)
	{
		printf("%dX^%d ",t->n,t->c);
		t=t->next;
	}
	printf("\nEnter the length of second polynomial");
	scanf("%d",&l2);
	for(i=0;i<l2;i++)
	{
		printf("\nEnter data");
		scanf("%d",&y);
		printf("\nEnter Coeffecient");
		scanf("%d",&x);
		p2=create(p2,x,y);
	}
	t=p2;
	printf("\nPolynomials before\n");
	while(t)
	{
		printf("%dX^%d ",t->n,t->c);
		t=t->next;
	}
	printf("\n1.Add two polynomials");
	printf("\n2.Subtract two polynomials");
	scanf("%d",&ch);
	if(ch==1)
	{
	       t=p1;
	       nn=p2;
	       while(t && nn)
	       {
			if(t->c > nn->c)
			{
			       r=create(r,t->c,t->n);
			       t=t->next;
			}
			else if(t->c < nn->c)
			{
				r=create(r,nn->c,nn->n);
				nn=nn->next;
			}
			else
			{
				r=create(r,t->c,nn->n+t->n);
				t=t->next;
				nn=nn->next;
			}
	       }
	}
	       else
	       {
			t=p1;
			nn=p2;
			while(t!=NULL || nn!=NULL)
			{
				if(t->c > nn->c)
				{
					r=create(r,t->c,t->n);
					t=t->next;
				}
				else if(t->c < nn->c)
				{
					r=create(r,nn->c,nn->n);
					nn=nn->next;
				}
				else
				{
					r=create(r,t->c,nn->n - t->n);
					t=t->next;
					nn=nn->next;
				}
			}

		}
		t=p1;
		printf("\nPolynomials before\n");
		while(t)
		{
			printf("%dX^%d ",t->n,t->c);
			t=t->next;
		}
		printf("\n");
		t=p2;
		while(t)
		{
			printf("%dX^%d ",t->n,t->c);
			t=t->next;
		}
		printf("\n The resultant polynomial");
		t=r;
		while(t)
		{
			printf("%dX^%d ",t->n,t->c);
			t=t->next;
		}
	getch();
}