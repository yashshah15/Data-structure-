#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct stack
{
	int info;
	struct stack* next;
}*top,*nn;
int n,ch;
void main()
{
	clrscr();
	do
	{
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Peek");
		printf("\n0.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			if(top==NULL)
			{
				nn=(struct stack*)malloc(sizeof(struct stack));
				printf("\nEnter data");
				scanf("%d",&n);
				nn->info=n;
				top=nn;
			}
			else
			{
				nn=(struct stack*)malloc(sizeof(struct stack));
				printf("\nEnter data");
				scanf("%d",&n);
				nn->info=n;
				nn->next=top;
				top=nn;
			}
			break;
			case 2:
			if(top==NULL)
			{
				printf("\nUnderflow");
			}
			else
			{
				top=top->next;
			}
			break;
			case 3:
			printf("\nThe value at the top of stack is %d\n",top->info);
			break;
		}
		nn=top;
		while(nn)
		{
			printf("%d\t",nn->info);
			nn=nn->next;
		}
	}while(ch!=0);
	getch();
}