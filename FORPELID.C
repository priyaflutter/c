#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,sum=0,rem,n;
	 clrscr();
	 printf("n=");
	 scanf("%d",&n);
	 i=n;
	 for(;n>0;)
	 {

		rem=n%10;
		sum=sum*10+rem;
		n=n/10;



	 }
		printf("sum=%d",sum);

       if(sum==i)
       {
		printf("\npelidrone no");

       }
       else
       {
		printf("\nnot pelidrone no");

       }




	getch();

}