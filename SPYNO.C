#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,rem,mul=1;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	while(n>0)



	{
	    rem=n%10;
	    sum=sum+rem;
	    mul=mul*rem;
	    n=n/10;

	}
		printf("sum=%d",sum);



		printf("\nmul=%d",mul);

	if(sum==mul)
	{
		printf("\nits spy number");
	}
	else
	{
		printf("\nits not spy number");
	}



	getch();

}