#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("\n%d",&b);
	printf("c=");
	scanf("\n%d",c);
	printf("d=");
	scanf("\n%d",d);

	if(a>b)
	{
	   if(a>c)
	   {
		if(a>d)
		{
			printf("a is max");

		}
		else
		{
			printf("d is max");


		}
	   }
	   else
	   {
		if(c>d)
		{
			printf("c is max");

		}
		else
		{
			printf("d is max");

		}

	   }



	}
	else
	{
	  if(b>c)
	  {
		if(b>d)
		{
			printf("b is max");

		}
		else
		{
			printf("d is max");

		}

	  }
	  else
	  {
		if(c>d)
		{
			printf("c is max");

		}
		else
		{
			printf("d is max");

		}

	  }

	}



















	getch();

}