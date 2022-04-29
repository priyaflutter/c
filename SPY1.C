#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,rem,spy;
	clrscr();
	while(i<=1000)
	{
		n=i;
		spy=0;
	    while(n!=0)
	    {
		rem=n%10;
		spy=spy+(rem*rem*rem);
		n=n/10;

	    }
	if(spy==i)
	{
		printf("\n%d",i);
	}
		i++;


	}














	getch();

}