#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=65;i<=69;i++)
	{
	   /*	for(k=65;k<=i;k++)
		{
			printf(" ");

		}      */
		for(j=i;j>=65;j--)
		{
			printf("%c",j);
		}

		printf("\n");

	}
	for(i=68;i>=65;i--)
	{

		for(j=i;j>=65;j--)
		{
			printf("%c",j);
		}

		printf("\n");

	}


             




	getch();

}