#include<stdio.h>
#include<conio.h>
struct creative
{
	int h,m,s;

}d,d1;
void main()
{
	int sum=0,sum1=0,sum2=0,hh,mm,ss;
	clrscr();
	printf("hour=");
	scanf("%d",&d.h);
	printf("\hour=");
	scanf("%d",&d1.h);
	printf("minute=");
	scanf("%d",&d.m);
	printf("minute=");
	scanf("%d",&d1.m);
	printf("second=");
	scanf("%d",&d.s);
	printf("second=");
	scanf("%d",&d1.s);
	sum=sum+d.h+d1.h;
	printf("hh=%d",sum);
	sum1=sum1+d.m+d1.m;
	printf("\nmm=%d",sum1);
	sum2=sum2+d.s+d1.s;
	printf("\nss=%d",sum2);
	hh=ss/3600;
	mm=(ss-hh*3600)/60;
	ss=ss-hh*3600-mm*60;




	printf("\n\n time a b sum");
	printf(" \n  hour %d",d.h);
	printf(" %d",d1.h);
	printf("  %d",sum);
	printf("  %d",hh);
	printf("\nminute %d",d.m);
	printf(" %d",d1.m);
	printf(" %d",sum1);
	printf("  %d",mm);
	printf("\nsecond %d",d.s);
	printf(" %d",d1.s);
	printf(" %d",sum2);
	printf(" %d",ss);













		getch();
}