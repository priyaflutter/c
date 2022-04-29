#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,n,sum,rem,spy,arm;
	clrscr();
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("\n%d",&b);
	printf("c=");
	scanf("\n%d",&c);
	if(a==b && a==c)
	{
		printf("\nn=");
		scanf("\n%d",&n);
		sum=0;
		while(n>0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;

		}

		printf("\nsum=%d",sum);

	}
	else if(a==b)
	{
		printf("\nn=");
		scanf("\n%d",&n);
		sum=0;
		while(n>0)
		{
			rem=n%10;
			sum=sum*10+rem;
			n=n/10;

		}
		printf("\npeli=%d",sum);

	}
	else if(a==c)
	{

		printf("\nn=");
		scanf("\n%d",&n);
		arm=1;
		while(n>1)
		{
			rem=n%10;
			arm=arm+(rem*rem*rem);
			n=n/10;

		}
		printf("\narm=%d",arm);

	}
	else
	{

		printf("\nn=");
		scanf("\n%d",&n);
		sum=0;
		spy=1;
		while(n>0)
		{
			rem=n%10;
			sum=sum+rem;
			spy=spy*rem;
			n=n/10;

		}
		printf("\nsum=%d",sum);
		printf("\nspy=%d",spy);

	}



	getch();

}