#include<stdio.h>
#include<conio.h>
#include<process.h>
void display(int b[],int no);
void main()
{
	int a[15],loc,e,ch,i,n;
	clrscr();
	printf("\nEnter the no. of array elements");
	scanf("%d",&n);
	printf("\nEnter array elements");
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element",i+1);
		scanf("%d",&a[i]);
	}
	do
	{
		if(n==15)
		{
			printf("\n2.Delete element");
			printf("\n0.Exit");
			printf("\nEntr choice");
			scanf("%d",&ch);
		}
		if(n==0)
		{
			printf("\n1.Insert element");
			printf("\n0.Exit");
			printf("\nEnter choice");
			scanf("%d",&ch);
		}
		else
		{
			printf("\n1.Insert element");
			printf("\n2.Delete element");
			printf("\n0.Exit");
			printf("\nEnter choice");
			scanf("%d",&ch);
		}
		switch(ch)
		{
			case 1:
			if(n==15)
			{
				printf("\nOverflow");
			}
			else
			{
				printf("\nEnter element to be inserted");
				scanf("%d",&e);
				for(i=0;i<n;i++)
				{
					if(e<a[i])
					{
						loc=i;
						break;
					}
					else
					{
						loc=n;
					}
				}
				for(i=(n-1);i>=loc;i--)
				{
					a[i+1]=a[i];
				}
				a[loc]=e;
				n++;
			}
			display(a,n);
			break;
			case 2:
			if(n==0)
			{
				printf("\nUnderflow");
			}
			else
			{
				printf("\nEnter element to be deleted");
				scanf("%d",&e);
				for(i=0;i<n;i++)
				{
					if(a[i]==e)
					{
						loc=i;
						break;
					}
				}
				for(i=loc;i<n;i++)
				{
					a[i]=a[i+1];
				}
				n--;
			}
			display(a,n);
			break;
			case 0:
			exit(0);
		}
	}while(ch!=0);
	getch();
}
void display(int b[],int no)
{
	int j;
	for(j=0;j<no;j++)
	{
		printf("\n%d",b[j]);
	}
}
