#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{

	int x=DETECT,y,a,b,n,i;
	initgraph(&x,&y,"c:\\turboc3\\bgi");

	settextstyle(4,0,50);
	outtextxy(100,200,"Creative");
	cleardevice();
	delay(10);
	line(10,10,600,10);
	line(10,10,10,450);
	line(10,450,600,450);
	line(600,10,600,450);

	printf("\n\n\t\t\ttictactoe");
	printf("\nPlayer 1=");
	scanf("%d",&a);
	printf("\Player 2=");
	scanf("%d",&b);
	printf("\nEnter your Choise=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	switch(n)
	{
		case 1:
		{
			printf("\nPlayer 1: pls any press no");
			break;

		}
		case 2:
		{
			printf("\nPlayer 2 : pls any press no");
			break;
		}

		default :
		{
			printf("\nYour choise is wrong");
		}

	}

		if(a==b)
		{
		       printf("\no");
		}
		else
		{
			printf("X");
		}

       }







	getch();


}