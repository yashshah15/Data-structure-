#include<stdio.h>
#include<conio.h>
int h[10],s[10],n,ch,i,f,t,l;
void search()
{
	f=0;
	printf("\nenter the no to be searched");
	scanf("%d",&n);
	t=n%10;
	if(h[t]==n)
	{
		f=1;
		l=t;
	}
	else
	{
		for(i=t+1;i<10;i++)
		{
			if(h[i]==n)
			{
				f=1;
				l=i;
				break;
			}
		}
	}
	if(f==0)
	{
		for(i=0;i<t;i++)
		{
			if(h[i]==n)
			{
				f=1;
				l=i;
				break;
			}
		}
	}
	if(f==1)
	{
		printf("\nSearch Succesful");
		printf("\nElement found at %d",l);
	}
	else
	{
		printf("\nSearch Unsuccessful");
	}
}
void main()
{
	clrscr();
	for(i=0;i<10;i++)
	{
		s[i]=0;
	}
	do
	{
		printf("\n1.insert element");
		printf("\n2.Search element");
		printf("\n3.Delete element");
		printf("\n0.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nEnter element");
			scanf("%d",&n);
			t=n%10;
			if(s[t]==0)
			{
				h[t]=n;
				s[t]=1;
			}
			else
			{
				f=0 ;
				for(i=t+1;i<10;i++)
				{
					if(s[i]==0)
					{
						f=1;
						h[i]=n;
						break;
					}
				}
				if(f==0)
				{
					for(i=0;i<t;i++)
					{
						if(s[i]==0)
						{
							h[i]=n;
							break;
						}
					}
				}
			}
			break;
			case 2:
			search();
			break;
			case 3:
			printf("\nEnter element to delete");
			scanf("%d",&n);
			search();
			if(f==1)
			{
				s[l]=-1;
				h[l]=0;
			}
			printf("\nValue deleted");
			break;
		}
		for(i=0;i<10;i++)
		{
			printf("%d ",h[i]);
		}
	}while(ch!=0);
	getch();
}
