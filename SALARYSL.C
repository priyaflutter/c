#include<stdio.h>
#include<conio.h>
void main()
{
	float emp,bas,mob,da,hra,oth,gs,pf,te,insu,it,td,ns;
	clrscr();

	printf("--------------------------------------------------------------------------------");
	printf("\t\t\t    EMPLOYEE SALARY DETAILS");
	printf("\n--------------------------------------------------------------------------------");
	printf("EMPNO:");
	scanf("%f",&emp);
	printf("BASIC:");
	scanf("%f",&bas);
	printf("--------------------------------------------------------------------------------");
	printf("EARNINGS\t\t\tDEDUCTIONS");
	printf("\n--------------------------------------------------------------------------------");

	if(bas<10000)
	{
		mob=bas*5/100;
		da=bas*8/100;
	}
	else if(bas<15000)
	{
		mob=bas*8/100;
		da=bas*10/100;
	}
	else
	{
		mob=bas*12/100;
		da=bas*15/100;
	}

	if(bas<8000)
	{
		hra=bas*5/100;
	}
	else if(bas<20000)
	{
		hra=bas*10/100;
	}
	else
	{
		hra=bas*12/100;
	}

	if(bas<15000)
	{
		oth=bas*2/100;
	}
	else if(bas<25000)
	{
		oth=bas*3/100;
	}
	else
	{
		oth=bas*5/100;
	}

	te=mob+da+hra+oth;

	gs=te+bas;

	if(gs<8000)
	{
		pf=gs*5/100;
	}
	else if(gs<15000)
	{
		pf=gs*7/100;
	}
	else
	{
		pf=gs*10/100;
	}

	if(gs<5000)
	{
		insu=gs*2/100;
	}
	else if(gs<15000)
	{
		insu=gs*4/100;
	}
	else
	{
		insu=gs*5/100;
	}

	if(gs<8000)
	{
		it=gs*1/100;
	}
	else if(gs<15000)
	{
		it=gs*2/100;
	}
	else
	{
		it=gs*3/100;
	}
	td=pf+insu+it;
	ns=gs-td;

	printf("MOB\t=%.2f\t\tPF\t=%.2f",mob,pf);
	printf("\nDA\t=%.2f\t\tINSU\t=%.2f",da,insu);
	printf("\nHRA\t=%.2f\t\tIT\t=%.2f",hra,it);
	printf("\nOTHERS\t=%.2f",oth);
	printf("\n--------------------------------------------------------------------------------");
	printf("TOTAL\t=%.2f\t\tTOTAL\t=%.2f",te,td);
	printf("\n--------------------------------------------------------------------------------");
	printf("GROSS SALARY=%.2f\t\tNET SALARY=%.2f",gs,ns);
	printf("\n===================================== END ======================================");

	getch();
}