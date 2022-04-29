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
class second :public first
{
	public:
	int sum;
	void get1()
	{
		sum=a+b;
		cout<<"\nsum="<<sum;
	}


};
class third :public first
{
	public:
	int min;
	void get2()
	{
		min=(a<b)?a:b;
		cout<<"\nmin="<<min;
	}


};
void main()
{
	clrscr();
	second s;
	s.get();
	s.get1();
	third t;
	t.get();
	t.get2();


	getch();
}
