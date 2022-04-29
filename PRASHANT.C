#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,k,n=1;
	clrscr();

	for(i=1;i<=5;i++)
       {
		for(k=5;k>=i;k--)
		{
			printf(" ");

		}
		for(j=1;j<=i;j++)
		{

			printf("%d",n);
			n=n+1;


		}

		  printf("\n");
		  n=n+4;

	}





	getch();

}