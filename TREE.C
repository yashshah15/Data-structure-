#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct tree
{
	int n;
	struct tree *left;
	struct tree *right
}*root,*par,ptr,*nn;
int ch,d;
void main()
{
	clrscr();
	do
	{
		printf("\n1.Insert Element");
		printf("\n2.Delete Element");
		printf("\nSearch Element");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			if(root==NULL)
			{
				root=(struct tree*)malloc(sizeof(struct tree));
				printf("\nEnter data");
				scanf("%d",&d);
				root->n=d;
			}
			else
			{
				par=start;
				ptr=start;
				printf("\nEnter data");
				scanf("%d",&d);
				while(ptr!=NULL)
				{
					if(d<ptt->n)
					{
						par=ptr;
						ptr=ptr->left;
					}
					else
					{
						par=ptr;
						ptr=ptr->right;
					}
				}
				nn=(struct tree*)malloc(sizeof(struct tree));
				nn->n=d;
				if(par->n < d)
					par->left=nn;
				else
					par->right=nn;
			}
			break;
			case 2:
			printf("\nEnter The element to be deleted");
			scanf("%d",&d);
			ptr=root;
			par=ptr;
			while(ptr)
			{
				if(ptr->n==d)
				{
					if(
					break;
				}
				else
				{
					if(ptr->n <d)
					{
						par=ptr;
						ptr=ptr->left;
					}
					else
					{
						par=ptr;
						prt=ptr->right;
					}
				}
			}
			break;
			case 3:
			printf("\nEnter the element to be searched");
			scanf("%d",&d);
			ptr=root;
			while(ptr)
			{
				if(ptr->n==d)
				{
					printf("\nSearch Successful");
					break;
				}
				else
				{
					if(ptr->n <d)
						ptr=ptr->left;
					else
						prt=ptr->right;
				}
			}
			break;
		}
	}
}