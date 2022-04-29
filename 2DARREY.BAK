#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],b[100][100],i,j,n,sum,min,max,rs,cs,css,ts,sum1,m;
	clrscr();
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("\na[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}

	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}

	}
		printf("\nsum=%d",sum);
	min=a[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
			}

		}
	}

		printf("\nmin value=%d",min);

	max=a[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}

		}
	}

		printf("\nmax value=%d",max);


	for(i=0;i<n;i++)
	{
		rs=0;
		for(j=0;j<n;j++)
		{
			rs=rs+a[i][j];

		}


		printf("\nrow %d sum=%d",i+1,rs);


	}


	for(i=0;i<n;i++)
	{
		cs=0;
		for(j=0;j<n;j++)
		{
			cs=cs+a[j][i];

		}


		printf("\ncloumn %d sum=%d",j+1,cs);


	}
	printf("\nm=");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\nb[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);

		}

	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	sum1=0;
	for(i=0;i<m;i++)
	{

		for(j=0;j<m;j++)
		{
			sum1=sum1+b[i][j];

		}

	}

		printf("\n2sum=%d",sum1);

	for(i=0;i<n+m;i++)
	{

		for(j=0;j<n+m;j++)
		{
			ts=sum+sum1;

		}


	}
		printf("\ntotal sum=%d",ts);









	getch();

}