#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,n,sum,spy,mul,rem,arm,i,fact;
	clrscr();
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	cout<<"d=";
	cin>>d;
	cout<<"e=";
	cin>>e;


	if(a==b && a==c && a==d && a==e)
	{
	    cout<<"\nn=";
	    cin>>n;
	    sum=0;
	    while(n>0)
	    {
		rem=n%10;
		sum=sum+rem;
		n=n/10;

	    }
	    cout<<"\nindivial digit sum="<<sum;
	}
	if(a==b && a==c && a==e)
	{
		i=1;
		cout<<"\nn=";
		cin>>n;

		while(i<=10)
		{
		    cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
		    i++;
		}

	}
	if(a==b && b==c)
	{
		cout<<"\ni=";
		cin>>i;
		n=i;
		sum=0;
		while(n>0)
		{
			rem=n%10;
			sum=sum*10+rem;
			n=n/10;

		}
		cout<<"\npelidrone no="<<sum;
		if(sum==i)
		{
			cout<<"\nthis is pelidrone no";
		}
		else
		{
			cout<<"\nthis is not pelidrone no";
		}

	}
	if (b==c && d==e)
	{
		i=1;
		cout<<"\nn=";
		cin>>n;

		fact=1;
		while(i<=n)
		{
			cout<<i;
			fact=fact*i;
			i++;
		}

			cout<<"\nfact="<<fact;

	}
	if(a==c)
	{
		cout<<"\nn=";
		cin>>n;
		sum=0;
		mul=1;
		while(n>0)
		{
			rem=n%10;
			sum=sum+rem;
			mul=mul*rem;
			n=n/10;


		}
		cout<<"\nsum="<<sum;
		cout<<"\nmul="<<mul;

		if(sum==mul)
		{
			cout<<"\nits spy no";
		}
		else
		{
			cout<<"\nits not spy no";
		}

	}
	if(b==c)
	{
		cout<<"\nn=";
		cin>>n;
		arm=0;
		while(n>0)
		{
			rem=n%10;
			arm=arm+(rem*rem*rem);
			n=n/10;
		}

		cout<<"\narmstrong number="<<arm;

	}
	if(a==d)
	{

		cout<<"i=";
		cin>>i;
		while(i<=10)
		{
			if(i%2==0)
			{
				cout<<"i="<<i;
			}
			 i++;

		}

	}




	getch();


}