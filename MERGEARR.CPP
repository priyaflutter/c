#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100],n,i,m,j,b[100],c[100];
	clrscr();
	cout<<"n=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\na["<<i<<"]=";
		cin>>a[i];


	}
	cout<<"m=";
	cin>>m;
	for(i=0;i<m;i++)
	{
		cout<<"\nb["<<i<<"]=";
		cin>>b[i];

	}
	j=0;
	for(i=0;i<n+m;i++)
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


		cout<<"\nc["<<i<<"]="<<c[i];

	}




	getch();

}