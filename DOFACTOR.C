#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,fact=1;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	do
	{
		fact=fact*i;
		i++;


	}
	while(i<=n);
	printf("fact=%d",fact);





	getch();


}
