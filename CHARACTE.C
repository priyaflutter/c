#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,k;
	clrscr();

	for(i=69;i>=65;i--)
	{
		for(j=65;j<=i;j++)
		{

			printf("%c",j);

		}

		for(k=68;k>=i;k--)
		{
			printf("  ");

		}

		for(j=i;j>=65;j--)
		{

			printf("%c",j);

		}


		printf("\n");




	}
	getch();

}