#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4],n,i,min,smin;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);

	}
	min=a[0];
	smin=a[0];

	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			smin=min;
			min=a[i];

		}
		else if(min>a[i] && smin<a[i])
		{

				smin=a[i];

		}


	}
	  printf("second min=%d",smin);



	getch();

}