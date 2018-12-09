#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
char postfix[15],c;
int stack[10],top=-1,l,i,a,b;
void main()
{
	clrscr();
	printf("\nEnter postfix expression");
	gets(postfix);
	l=strlen(postfix);
	for(i=0;i<l;i++)
	{
		c=postfix[i];
		if(c>='0' &&c<='9')
		{
			top++;
			stack[top]=(int)c-48;
		}
		else if(c=='+')
		{
			a=stack[top];
			top--;
			b=stack[top];
			stack[top]=b+a;
		}
		else if(c=='-')
		{
			a=stack[top];
			top--;
			b=stack[top];
			stack[top]=b-a;
		}
		else if(c=='*')
		{
			a=stack[top];
			top--;
			b=stack[top];
			stack[top]=b*a;
		}
		else if(c=='/')
		{
			a=stack[top];
			top--;
			b=stack[top];
			stack[top]=b/a;
		}
		else if(c=='^')
		{
			a=stack[top];
			top--;
			b=stack[top];
			stack[top]=pow(b,a);
		}
	}
	printf("\nThe result of expression is %d",stack[top]);
	getch();
}