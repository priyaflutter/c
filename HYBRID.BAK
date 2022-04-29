#include<iostream.h>
#include<conio.h>
class first
{
	   public:
	   int a,b;
	   void get()
	   {
		cout<<"\na=";
		cin>>a;
		cout<<"b=";
		cin>>b;
	   }

};
class second : public virtual first
{
	public:
	int c,sum;
	void get1()
	{
		cout<<"\nc=";
		cin>>c;
		sum=a+b+c;
		cout<<"\nsum1a+b+c="<<sum;
	}


};
class third :public virtual first
{
	public:
	int min,sum2;
	void get2()
	{
	   //	min=(a<b)?a:b;
	    //	cout<<"\nmin="<<min;

		sum2=a+b;
		cout<<"\nsum2a+b="<<sum2;
	}


};
class fourth : public second,public third
{
	public:
	int sum3;
	void get3()
	{

		sum3=sum+sum2;
		cout<<"\na+b+c="<<sum3;
	}
};
void main()
{
	clrscr();

	fourth f;
	f.get();
	f.get1();
	f.get2();
	f.get3();



	getch();
}
