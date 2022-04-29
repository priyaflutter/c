#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,n,m,b[100],c[100];
	clrscr();
	printf("n=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}

	printf("m=");
	scanf("%d",&m);

	for(i=0;i<m;i++)
	{
		printf("\nb[%d]=",i);
		scanf("%d",&b[i]);

	}
	j=0;
	for(i=0;i<(n+m);i++)
	{
		if(i<n)
		{
			c[i]=a[i];
		}
		else
		{
			c[i]=b[j];
			j++;
		}



	  printf(" c[%d]=%d",i,c[i]);
	}









	getch();

}