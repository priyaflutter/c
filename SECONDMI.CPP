#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100],n,i,j,smin,min;
	clrscr();
	cout<<"n=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\na["<<i<<"]=";
		cin>>a[i];


	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				min=a[i];
				a[i]=a[j];
				a[j]=min;

			}

		}
		smin=a[1];
	}

	    cout<<"\nsecound min="<<smin;







	getch();

}