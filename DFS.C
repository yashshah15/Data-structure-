#include<stdio.h>
#include<conio.h>
int adj[10][10],s[10],n,stack[10],top=-1,start,t,i,j;
void main()
{
	clrscr();
	printf("\mEnter no of nodes");
	scanf("%d",&n);
	printf("\nEnter adjacency matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
		s[i]=1;
	}
	printf("\nenter starting node");
	scanf("%d",&start);
	top++;
	stack[top]=start;
	for(i=0;i<n;i++)
		printf("%d ",s[i]);
	printf("\nDepth first traversal\n");
	while(top!=-1)
	{
		printf("%d ",stack[top]);
		t=stack[top];
		top--;
		s[t]=3;
		for(i=0;i<n;i++)
		{
			if(adj[t][i]==1 && s[i]==1)
			{
				top++;
				stack[top]=i;
				s[i]=2;
			}
		}
	}
	getch();
}
