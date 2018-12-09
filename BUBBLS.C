#include<stdio.h>
#include<conio.h>
int a[15],i,ptr,t,j,n;
void main()
{
	clrscr();
	printf("\nEnter no. of array elements");
	scanf("%d",&n);
	printf("\nEnter array elements");
	for(i=1;i<=n;i++)
	{
		printf("\nEnter %d element",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		ptr=1;
		while(ptr<=n-i)
		{
			if(a[ptr]>a[ptr+1])
			{
				t=a[ptr];
				a[ptr]=a[ptr+1];
				a[ptr+1]=t;
			}
			ptr++;
		}
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a[j]);
		}
		printf("\n");
	}
	printf("\nThe sorted array elements are");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}