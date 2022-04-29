#include<stdio.h>
#include<conio.h>
void main()
{
	int empno,basic,pf,insu,it,mob,da,hra,others,total,grosssalary,totals,netsalary;
	clrscr();
	printf("\t\t\tEMPLOYEE SALARY DETAILS");
	printf("\nempno=");
	scanf("%d",&empno);
	printf("\nbasic=");
	scanf("%d",&basic);
	if (basic<10000)
	{
		mob=basic*5/100;
	}
	else if(basic<=15000)
	{
		mob=basic*10/100;
	}
	else
	{
		mob=basic*12/100;
	}
//	printf("\nmob=%d",mob);
	if (basic<10000)
	{
		da=basic*8/100;
	}
	else if(basic<=15000)
	{
		da=basic*10/100;
	}
	else
	{
		da=basic*15/100;
	}
 //	printf("\nda=%d",da);
	if (basic<8000)
	{
		hra=basic*5/100;
	}
	else if(basic<=20000)
	{
		hra=basic*10/100;
	}
	else
	{
		hra=basic*12/100;
	}
//	printf("\nhra=%d",hra);
	if (basic<15000)
	{
		others=basic*2/100;
	}
	else if(basic<=25000)
	{
		others=basic*3/100;
	}
	else
	{
		others=basic*5/100;
	}
//	printf("\nothers=%d",others);
	total=mob+da+hra+others;
//	printf("\ntotal=%d",total);
	grosssalary=basic+total;
//	printf("\ngrosssalary=%d",grosssalary);
	if (grosssalary<8000)
	{
		pf=grosssalary*5/100;
	}
	else if(grosssalary<=15000)
	{
		pf=grosssalary*10/100;
	}
	else
	{
		pf=grosssalary*12/100;
	}
//	printf("\npf=%d",pf);
	if (grosssalary<5000)
	{
		insu=grosssalary*2/100;
	}
	else if(grosssalary<=15000)
	{
		insu=grosssalary*4/100;
	}
	else
	{
		insu=grosssalary*5/100;
	}
//	printf("\ninsu=%d",insu);
	if (grosssalary<8000)
	{
		it=grosssalary*1/100;
	}
	else if(grosssalary<=15000)
	{
		it=grosssalary*2/100;
	}
	else
	{
		it=grosssalary*3/100;
	}
   //	printf("EMPLOYEE SALARY DETAILS");
   //	printf("\nEMP NO:");
   //	printf("\nBASIC:");
	printf("\n\nEARNINGS\t\t\tDEDUCTIONS");
	printf("\nmob=%d",mob);
	printf("\t\t\tpf=%d",pf);
	printf("\nda=%d",da);
	printf("\t\t\t\tinsu=%d",insu);
	printf("\nhra=%d",hra);
	printf("\t\t\t\tit=%d",it);
	printf("\nothers=%d",others);
	printf("\t\t\ttotal=%d",total);
//	totals=pf+insu+it+others;
	printf("\ntotal=%d",totals);
	printf("\ngrosssalary=%d",grosssalary);
	netsalary=grosssalary-totals;
	printf("\t\tnetsalary=%d",netsalary);




	getch();

}