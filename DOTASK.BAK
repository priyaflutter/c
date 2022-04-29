#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,i,n,sum,rem,spy,arm;
	clrscr();
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	if (a>b && a>c)
	{
		i=a;
		i=1;
		do
		{
			n=i;
			sum=0;
			do
			{
				rem=n%10;
				sum=sum*10+rem;
				n=n/10;

			}
			while(n>0);
			if (sum==i)
			{
				printf("\n%d",i);
			}

				i++;

		}
		while(i<=100);





	}
	else if(b>c)
	{
		i=b;
		i=1;
		do
		{
			n=i;
			sum=0;
			spy=1;
			do
			{
				rem=n%10;
				sum=sum+rem;
				spy=spy*rem;
				n=n/10;

			}
			while(n>0);
			if (sum==spy)
			{
				printf("\n%d",i);

			}
				i++;



		}
		while(i<=100);


	}
	else
	{

		i=c;
		i=1;
		do
		{
			n=i;
			arm=0;
			do
			{
				rem=n%10;
				arm=arm+(rem*rem*rem);
				n=n/10;

			}
			while(n>1);
			if (arm==i)
			{
				printf("\n%d",i);

			}

				i++;


		}
		while(i<=100);


	}





	getch();

}