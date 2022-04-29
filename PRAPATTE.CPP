#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j,k;
	clrscr();
	printf("k=");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{

			printf(" %d",(2*(i+j))-3);



		}
		printf("\n");

	}






	getch();


}