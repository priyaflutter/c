#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,n,z,mul,rem,sum,spy,arm,peli,x,y;
	clrscr();
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	if(a==b && a==c)
	{
	       n=a;
	       sum=0;

	      while(n>0);

		rem=n%10;
		sum=sum+rem;
		n=n/10;

	}
		printf("sum=%d",sum);

	else if(a==b)
	{
		x=b;
		peli=0;

	      while(x!=0)

	       rem=x%10;
	       peli=peli*10+rem;
	       x=x/10;


	}
		printf("peli=%d",peli);

	else (a==c)
	{
		y=c;
		spy=0;
		mul=1;

	    while(y>0)

	       rem=z%10;
	       spy=spy+rem;
	       mul=spy*rem;
	       z=z/10;

	}
		printf("spy=%d",spy);
















	getch();

}