#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int h,m,s,hsum,msum,ssum;
	void get()
	{
		cout<<"hour=";
		cin>>h;
		cout<<"minute=";
		cin>>m;
		cout<<"second=";
		cin>>s;

	}
	void get1(demo d,demo d1)
	{
		hsum=d.h+d1.h;
		msum=d.m+d1.m;
		ssum=d.s+d1.s;

		cout<<"\nhsum="<<hsum;
		cout<<"\nmsum="<<msum;
		cout<<"\nssum="<<ssum;

	}
	void get2(demo d,demo d1)
	{
	   //	int ssum=0,msum=0,ssum=0;
		while(ssum>=60)
		{
			ssum=ssum-60;
			msum++;
		}
		while(msum>=60)
		{
		       msum=msum-60;
		       hsum++;

		}

		cout<<"\nafter hour sum="<<hsum;
		cout<<"\nafter minute sum="<<msum;
		cout<<"\nafter secound sum="<<ssum;

	}




};
void main()
{
	demo d,d1;
	clrscr();
	d.get();
	d1.get();
	d.get1(d,d1);
	d.get2(d,d1);


	getch();

}