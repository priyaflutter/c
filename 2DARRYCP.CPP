#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100][100],n,i,j,sum=0,min,max,crs,crrs,rsum,csum;
	clrscr();
	cout<<"n=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		cout<<"\na["<<i<<"]["<<j<<"]=";
		cin>>a[i][j];
		}

	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<a[i][j];

		}
		cout<<"\n";

	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];

		}

	}

		cout<<"\nsum="<<sum;

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

		cout<<"\nmin value="<<min;

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

		cout<<"\nmax value="<<max;

	for(i=0;i<n;i++)
	{
		rsum=0;
		for(j=0;j<n;j++)
		{
			rsum=rsum=a[i][j];
		}

	}

		cout<<"\nrow wise sum="<<rsum;

	for(j=0;j<n;j++)
	{
		csum=0;
		for(i=0;i<n;i++)
		{
			csum=csum=a[i][j];
		}

	}

		cout<<"\ncoloumn wise sum="<<csum;
	crs=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				crs=crs+a[i][j];
			}
		}

	}

		cout<<"\ncross sum="<crs;
	crrs=0;
	for(i=0;i<n;i++)
	{

		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				crrs=crrs+a[i][j];
			}
		}

	}

		cout<<"\ncross sum right side="<<crrs;















	getch();

}