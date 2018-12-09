#include<stdio.h>
#include<conio.h>
int min(int ar[],int k,int m);
void main()
{
	int a[15],n,t,loc,j,i;
	clrscr();
	printf("\nEnter no of array elements");
	scanf("%d",&n);
	printf("\nEnter array elements");
	for(i=1;i<=n;i++)
	{
		printf("\nEnter %d element",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		loc=min(a,i,n);
		t=a[loc];
		a[loc]=a[i];
		a[i]=t;
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a[j]);
		}
		printf("\n");
	}
	printf("\nThe sorted array elements are");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}
int min(int a[],int k,int m)
{
	int mi,i,loc;
	mi=a[k];
	loc=k;
	for(i=k;i<=m;i++)
	{
		if(mi>a[i])
		{
			mi=a[i];
			loc=i;
		}
	}
	return loc;
}