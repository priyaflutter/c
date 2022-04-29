#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,i,sum,rem,spy,arm,n;
	clrscr();
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("\n%d",&b);
	printf("c=");
	scanf("\n%d",&c);

	if(a>b && a>c)
	{
			i=a;
			i=1;
		      while(i<=100)
		      {


				n=i;
				sum=0;
			 while(n>0)
				{
					rem=n%10;
					sum=sum*10+rem;
					n=n/10;

				}
				if(sum==i)
				{
					printf(" %d",i);

				}
					i++;

			 }





	}
	else if (b>c)
	{
		i=b;
		i=1;
		while(i<=100)
		{
			n=i;
			arm=1;
			while(n>1)
			{
				rem=n%10;
				arm=arm+(rem*rem*rem);
				n=n/10;

			}
			if(arm==i)
			{
				printf("\n%d",i);

			}
				i++;

		}



	}
	else
	{
		i=c;
		i=1;
		while(i<=100)
		{
			n=i;
			spy=1;
			sum=0;
			while(n>0)
			{
				rem=n%10;
				sum=sum+rem;
				spy=spy*rem;
				n=n/10;

			}

			if (sum==spy)
			{
				printf("\n%d",i);

			}


				i++;

		}


	}













	getch();

}