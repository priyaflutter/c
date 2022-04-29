#include<stdio.h>
#include<conio.h>
void main()
{
	int n,n1,sum;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	n1=n%10;

	while(n>=10)
	{
		n=n/10;
		sum=n+n1;
	}



		printf("first nummber=%d",n);

		printf("\nlast number=%d",n1);

		printf("\nsum=%d",sum);









	getch();


}
