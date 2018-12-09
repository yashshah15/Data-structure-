#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
	if(b!=0)
		return(gcd(b,a%b));
	else
		return a;
}
int n,m,g;
void main()
{
	clrscr();
	printf("\nEnter 2 nos");
	scanf("%d%d",&n,&m);
	g=gcd(n,m);
	printf("\n Gcd of %d , %d is %d",n,m,g);
	getch();
}