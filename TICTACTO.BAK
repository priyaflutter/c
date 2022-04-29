#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int x=DETECT,y,n,j,i,choice;
	char a[3][3]={1,2,3,4,5,6,7,8,9}
	initgraph(&x,&y,"c:\\turboc3\\bgi");
	while(!kbhit())
	{
		settextstyle(4,0,10);
		outtextxy(100,180,"Creative");

	}
	cleardevice();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n%d",a[i][j]);

		 }

	}

	line(550,450,550,350);
	line(500,450,500,350);
	line(450,380,600,380);
	line(450,415,600,415);

	printf("\nplayer1[*]");
	printf("\nplayer[0]");
	scanf("\n%d",choice);
	switch(choice)
	{
		case 1:
		{
			choice[0][0]="*";
			break;
		}
		case 2:
		{
			choice[0][1]="*";
			break;
		}
		case 3:
		{
			choice[0][2]="*";
			break;
		}
		default:
		{
			printf("\nwrong choice");
			break;
		}

	}









	getch();

}





