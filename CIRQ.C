#include<stdio.h>
#include<conio.h>

int i,j,x,a[10],front=-1,rear=-1,ch,add;
void del();
void ins();
void display();
void main()
{
clrscr();
do
{
printf("\nEnter your choice :\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:
	if(front==0 && rear==4)
	{
		printf("queue overflow!! \n");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		printf("Enter the element  :");
		scanf("%d",&add);
		rear=rear+1;
		a[rear]=add;
	}
	else if(front!=0 && rear==4)
	{
		rear=0;
		printf("Enter the element  :");
		scanf("%d",&add);
		a[rear]=add;
	}
	else
	{
		printf("Enter the element  :");
		scanf("%d",&add);
		rear=rear+1;
		a[rear]=add;
	}
	break;

	case 2:
	if(front==-1)
	{
		printf("\nQueue Underflow !!!");
	}
	else if(front==rear)
	{
		add=a[front];
		front=-1;
		rear=-1;
		printf("Element Deleted :%d",add);
	}
	else
	{
		if(front==4)
		{
			add=a[front];
			a[front]=0;
			front=0;
		}
		else
		{
			add=a[front];
			a[front]=0;
			front++;
		}
		printf("Element Deleted :%d",add);
	}
	break;

	case 3:
	printf("\n Front:%d Rear:%d\n",front,rear);
	for(i=0;i<=4;i++)
	{
		printf("%d\t",a[i]);
	}
	break;

	case 4:
	exit(1);
	break;

	default:
	printf("wrong choice\n");

	}
}while(ch!=4);
getch();
}