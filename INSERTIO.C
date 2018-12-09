#include<stdio.h>
#include<conio.h>
int a[15],i,j,ptr,n,t;
void main()
{
	clrscr();
	printf("\nEnter the number of array elements");
	scanf("%d",&n);
	printf("\nEnter array elements");
	for(i=1;i<=n;i++)
	{
		printf("\nEnter %d element",i);
		scanf("%d",&a[i]);
	}
	a[0]=-1;
	for(i=2;i<=n;i++)
	{
		t=a[i];
		ptr=i-1;
		while(t<a[ptr])
		{
			a[ptr+1]=a[ptr];
			ptr--;
		}
		a[ptr+1]=t;
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a[j]);
		}
	}
	printf("\nThe sorted array elements are");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}