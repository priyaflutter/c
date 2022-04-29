#include<stdio.h>
#include<conio.h>
struct creative
{
	int s1,s2,s3,s4,s5;

}d[100];
void main()
{
	int n,i,sum,per;
	clrscr();
	printf("n=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{


		printf("s1=");
		scanf("%d",&d[i].s1);
		printf("s2=");
		scanf("%d",&d[i].s2);
		printf("s3=");
		scanf("%d",&d[i].s3);
		printf("s4=");
		scanf("%d",&d[i].s4);
		printf("s5=");
		scanf("%d",&d[i].s5);


	}

	for(i=0;i<n;i++)
	{

		sum=d[i].s1+d[i].s2+d[i].s3+d[i].s4+d[i].s5;
//		printf("sum=%d",sum);
		per=sum/5;
//		printf("per=%d",per);
	}

	printf("\n\t\tSTUDENT RESULT");
	printf("\ns1\ts2\ts3\ts4\ts5\tsum\tper");
	for(i=0;i<n;i++)
	{
		printf("\n%d",d[i].s1);
		printf("\t%d",d[i].s2);
		printf("\t%d",d[i].s3);
		printf("\t%d",d[i].s4);
		printf("\t%d",d[i].s5);
		printf("\t%d",sum);
		printf("\t%d",per);

	}



		getch();
}
