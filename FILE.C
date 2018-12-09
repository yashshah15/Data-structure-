#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	FILE *fp;
	clrscr();
	fp=fopen("data.txt","w");
	printf("\nEnter a character");
	while(c!=EOF)
	{
		c=getchar();
		putc(c,fp);
	}
	fclose(fp);
	getch();
}