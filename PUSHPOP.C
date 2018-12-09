#include<stdio.h>
#include<conio.h>
#include<process.h>
void display(int a[],int n);
void main()
{
	int stack[15],i,top,ch,n,item;
	top=0;
	clrscr();
	do
	{
		if(top==0)
		{
			printf("\n1.Push");
			printf("\n0.exit");
			printf("\nEnter choice");
			scanf("%d",&ch);
		}
		else if(top==15)
		{
			printf("\n2.Pop");
			printf("\n0.Exit");
			printf("\nEnter choice");
			scanf("%d",&ch);
		}
		else
		{
			printf("\n1.Push");
			printf("\n2.Pop");
			printf("\n0.exit");
			printf("\nEnter choice");
			scanf("%d",&ch);
		}
		switch(ch)
		{
			case 1:
			if(top==15)
			{
				printf("\nOverflow");
			}
			else
			{
				printf("\nEnter element to be push onto stack");
				scanf("%d",&item);
				top++;
				stack[top]=item;
			}
			display(stack,top);
			break;
			case 2:
			if(top==0)
			{
				printf("\nUnderflow");
			}
			else
			{
				item=stack[top];
				top--;
			}
			printf("\nElement deleted is : %d",item);
			display(stack,top);
			break;
			case 0:
			exit(0);
		}
	}while(ch!=0);
	getch();
}
void display(int a[],int n)
{
	int j;
	for(j=1;j<=n;j++)
	{
		printf("\n%d",a[j]);
	}
}
