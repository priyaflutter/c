#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int x=DETECT,y,p=30;
	initgraph(&x,&y,"c:\\turboc3\\bgi");
	// choras
	line(10,10,600,10);
	line(10,10,10,410);
	line(10,410,600,410);
	line(600,10,600,410);
	while(!kbhit())

	{
	//fourwheel
	line(30,400,50,400);
	line(30,400,30,380);
	arc(60,400,0,540,9);



	circle(60,400,7);
	line(70,400,90,400);
	arc(100,400,0,540,9);

	circle(100,400,7);
	line(110,400,130,400);
	line(130,400,130,375);

	line(30,400,30,375);
	line(30,375,45,340);
	line(45,340,90,340);
	line(90,340,110,360);
	line(110,360,130,375);
	line(36,360,110,360);
	line(68,360,68,340);

	p++;
	delay(11);
	cleardevice();
		if (p>=550)
		{
			p=30;

		}
	}
	getch();

}
