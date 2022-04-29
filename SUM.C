#include<stdio.h>
#include<conio.h>
void main()
{

	int n,i,arm=1,rem;
	clrscr();
	printf("i=");
	scanf("%d",&i);
	n=i;
	while(n>1)
	{
		rem=n%10;
		arm=arm+(rem*rem*rem);
		n=n/10;

	}

		printf("arm=%d",arm);







	getch();

}