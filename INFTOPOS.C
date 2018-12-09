#include<stdio.h>
#include<conio.h>
#include<string.h>
char infix[15],postfix[15],stack[10],a;
int top=-1,i,j=-1,l;
int getpriority(char o)
{
	if(o=='+'||o=='-')
		return 0;
	else if(o=='*'||o=='-')
		return 1;
	else
		return -1;
}
void main()
{
	clrscr();
	printf("\nEnter the infix expression");
	gets(infix);
	infix[strlen(infix)+1]=')';
	l=strlen(infix);
	for(i=0;i<l;i++)
	{
		a=infix[i];
		if(a=='(')
		{
			top++;
			stack[top]=a;
		}
		else if(a==')')
		{
			while(stack[top]!='(')
			{
				j++;
				postfix[j]=stack[top];
				top--;
			}
			top--;
		}
		else if(a=='+'||a=='-'||a=='*'||a=='/')
		{
			while(getpriority(stack[top])>getpriority(a))
			{
				j++;
				postfix[j]=stack[top];
				top--;
			}
			top++;
			stack[top]=a;
		}
		else
		{
			j++;
			postfix[j]=a;
		}
	}
	while(top!=-1)
	{
		j++;
		postfix[j]=stack[top];
		top--;
	}
	printf("Postfix expression \n");
	puts(postfix);
	getch();
}