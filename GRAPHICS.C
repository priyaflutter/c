#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int x=DETECT,y;
	initgraph(&x,&y,"c:\\turboc3\\bgi");
	// choras
	line(10,10,600,10);
	line(10,10,10,450);
	line(10,450,600,450);
	line(600,10,600,450);

       //cirscle
	circle(50,50,30);
//	setfillstyle(SOLID_FILL,YELLOW)
//	floodfill(50,50,YELLOW);


	//first bulding
	line(20,280,20,450);
	line(20,280,80,280);
	line(80,280,80,450);
	line(40,400,40,450);
	line(60,400,60,450);
	line(40,400,60,400);
	line(27,375,27,390);
	line(27,375,40,375);
	line(40,375,40,390);
	line(27,390,40,390);
	line(27,365,27,350);
	line(27,365,40,365);
	line(40,365,40,350);
	line(27,350,40,350);
	line(27,340,27,325);
	line(27,340,40,340);
	line(40,340,40,325);
	line(27,325,40,325);
	line(30,290,70,290);
	line(30,310,70,310);
	line(30,290,30,310);
	line(70,290,70,310);
	line(72,375,72,390);
	line(72,375,59,375);
	line(59,375,59,390);
	line(59,390,72,390);
	line(59,365,59,350);
	line(72,365,72,350);
	line(59,365,72,365);
	line(59,350,72,350);
	line(72,325,72,340);
	line(59,325,72,325);
	line(59,325,59,340);
	line(59,340,72,340);
	// second bulding

	line(90,340,90,450);
	line(90,340,190,340);
	line(190,340,190,450);
	circle(105,355,10);
	circle(175,355,10);
	line(100,390,100,450);
	line(180,390,180,450);
	circle(100,385,5);
	circle(180,385,5);
	line(115,385,115,450);
	line(165,385,165,450);
	line(115,385,165,385);
	line(125,385,125,400);
	line(135,385,135,400);
	line(145,385,145,400);
	line(155,385,155,400);
	line(115,400,165,400);



	line(120,450,120,430);
	line(130,450,130,430);
	line(140,450,140,430);
	line(150,450,150,430);
	line(160,450,160,430);
	line(120,430,160,430);

	line(140,345,120,370);
	line(140,345,160,370);
	line(120,370,160,370);

	line(200,450,200,250);
	line(250,450,250,250);
	line(200,250,250,250);
 //third buling
	line(210,450,210,420);
	line(240,450,240,420);
	line(210,420,240,420);
	line(215,450,215,425);
	line(235,450,235,425);
	line(215,425,235,425);

	  //majid

	line(260,450,260,420);
	line(270,450,270,420);
	line(260,420,270,400);
	line(270,400,270,380);

	line(270,380,280,370);
	line(280,370,290,380);

	line(270,420,280,405);
	line(280,405,290,420);
	line(290,420,290,450);
	line(300,450,300,420);
	line(300,420,290,400);
	line(290,400,290,380);
	line(270,420,290,420);
	line(270,380,290,380);
	line(280,450,280,385);
	circle(280,380,4);
	line(280,370,280,350);
	line(280,350,290,355);
	line(290,355,280,360);

	line(310,450,310,410);
	line(390,450,390,410);
	line(310,410,390,410);
	line(310,440,390,440);
	line(315,440,315,420);
	line(315,420,325,420);
	line(325,420,325,440);
	line(380,450,380,390);
	circle(380,385,4);
	line(345,410,345,360);
	line(350,410,350,360);
	line(345,360,350,360);
	line(340,370,355,370);
	line(340,366,355,366);
	line(340,366,340,370);
	line(355,366,355,370);

	line(560,450,560,390);
	circle(560,385,4);

	//fourwheel
	line(420,440,420,430);
	line(420,440,430,440);
	arc(435,440,0,540,5);


	circle(435,440,3);
	line(440,440,455,440);
	arc(460,440,0,540,5);

	circle(460,440,3);
	line(465,440,472,440);

	line(420,430,425,420);
	line(425,420,460,420);
	line(460,420,470,425);
	line(460,420,450,410);
	line(450,410,430,410);
	line(430,410,425,420);
	line(440,410,440,420);

	line(470,425,472,440);
	line(470,425,470,390);
	circle(470,385,4);















	getch();

}