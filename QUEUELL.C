#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct queue
{
	int info;
	struct queue* next;
}*front,*rear,*nn;
int ch,n;
void main()
{
	clrscr();
	do
	{
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n0.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			if(front ==NULL && rear==NULL)
			{
				nn=(struct queue*)malloc(sizeof(struct queue));
				printf("\nEnter data");
				scanf("%d",&n);
				nn->info=n;
				front=nn;
				rear=front;
			}
			else
			{
				nn=(struct queue*)malloc(sizeof(struct queue));
				printf("\nEnter data");
				scanf("%d",&n);
				nn->info=n;
				rear->next=nn;
				rear=nn;
			}
			break;
			case 2:
			if(front==NULL)
			{
				printf("\nUnderflow");
			}
			else if(front==rear)
			{
				n=front->info;
				front=NULL;
				rear=NULL;
			}
			else
			{
				n=front->info;
				front=front->next;
			}
			printf("\nDeleted element is %d",n);
			break;
		}
		nn=front;
		while(nn)
		{
			printf("%d\t",nn->info);
			nn=nn->next;
		}
	}while(ch!=0);
	getch();
}