#include<stdio.h>
#include<conio.h>
#include<process.h>
void display();
int q[5],f=0,r=0,ch,item;
void main()
{
	clrscr();
	do
	{
		if(f==0 && r==0)
		{
			printf("\n1.Insert element");
			printf("\n0.exit");
			printf("\nEnter choice");
			scanf("%d",&ch);
		}
		else if(f==1 && r==5 || (f==r+1))
		{
			printf("\n2.Delete element");
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
			if((f==1 && r==5) || f==r+1)
			{
				printf("\nOverflow");
			}
			else
			{
				if(f==0 && r==0)
				{
					f=1;
					r=1;
				}
				else if(r==5)
				{
					r=1;
				}
				else
				{
					r++;
				}
				printf("\nEnter item to be inserted");
				scanf("%d",&item);
				q[r]=item;
			}
			printf("\n Front = %d Rear =%d\n",f,r);
			display();
			break;
			case 2:
			if(f==0)
			{
				printf("\nUnderflow");
			}
			else
			{
				q[f]=0;
				if(f==r)
				{
					f=0;
					r=0;
				}
				else if(f==5)
				{
					f=1;
				}
				else
				{
					f++;
				}
			}
			printf("\n Front = %d Rear =%d\n",f,r);
			display();
			break;
			case 0:
			exit(0);
		}
	}while(ch!=0);
	getch();
}
void display()
{
	int j;
	for(j=1;j<=5;j++)
	{
		printf("%d\t",q[j]);
	}
}