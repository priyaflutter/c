#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,b[100],c[100];
	clrscr();
	printf("n=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("\nb[%d]=",i);
		scanf("%d",&b[i]);

	}
	for(i=0;i<n;i++)
	{

		c[i]=a[i]+b[i];

	}
	for(i=0;i<n;i++)
	{

		 printf("\nc[%d]=%d",i,c[i]);

	}






	getch();

}