#include<stdio.h>
#include<conio.h>
#include<process.h>
int n,d,ch,a[10],i,j,t;
char rem[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void main()
{
	clrscr();
	do
	{
		printf("\nEnter a number");
		scanf("%d",&n);
		printf("\n1.Convert to binary");
		printf("\n2.Convert to octal");
		printf("\n3.Convert to hexadecimal");
		printf("\nEnter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			i=0;
			while(n!=0)
			{
				d=n%2;
				a[i]=d;
				n=n/2;
				if(n!=0)
				{
					i++;
				}
			}
			printf("\nBinary number\n");
			for(j=i;j>=0;j--)
			{
				printf("%c\t",rem[a[j]]);
			}
			break;
			case 2:
			i=0;
			while(n!=0)
			{
				d=n%8;
				a[i]=d;
				n=n/8;
				if(n!=0)
				i++;
			}
			printf("\nOctal number\n");
			for(j=i;j>=0;j--)
			{
				printf("%c\t",rem[a[j]]);
			}
			break;
			case 3:
			i=0;
			while(n!=0)
			{
				d=n%16;
				a[i]=d;
				n=n/16;
				if(n!=0)
				{
					i++;
				}
			}
			printf("\nHexadecimal number\n");
			for(j=i;j>=0;j--)
			{
				printf("%c\t",rem[a[j]]);
			}
			break;
			case 0:
			exit(0);
		}
	}while(ch!=0);
	getch();
}
