#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
int main()
{ int i;
  int gdriver=DETECT,gmode=0;
  initgraph(&gdriver,&gmode,"");
  setbkcolor(BLUE);
  for(i=0;i<100;i++)
  {
   line(0,200,630,200);
  line(0,300,630,300);
  line(0,400,630,400);
  line(10,250,40,250);
  line(60,250,90,250);
  line(110,250,140,250);
  line(170,250,200,250);
  line(220,250,250,250);
  line(270,250,300,250);
  line(320,250,350,250);
  line(370,250,400,250);
  line(420,250,450,250);
  line(470,250,500,250);
  line(520,250,550,250);
  line(570,250,600,250);
  line(10,350,40,350);
  line(60,350,90,350);
  line(110,350,140,350);
  line(170,350,200,350);
  line(220,350,250,350);
  line(270,350,300,350);
  line(320,350,350,350);
  line(370,350,400,350);
  line(420,350,450,350);
  line(470,350,500,350);
  line(520,350,550,350);
  line(570,350,600,350);


  line(630,30,630,400);

  line(500,30,630,30);
	  //finish
   line(500,74,630,74);
   line(500,30,500,74);
  gotoxy(68,4);
  printf("FINISH");


   setfillstyle(SOLID_FILL,YELLOW);
  circle(30,25,25);
    floodfill(30,25,WHITE);        //sun

  //setfillstyle(SOLID_FILL,YELLOW);
  rectangle(50+2*i,180,170+2*i,225);
  //floodfill(53+2*i,181,WHITE);
 // flodfill(172+2*i,226,WHITE);
  setfillstyle(SOLID_FILL,RED);
  circle(70+2*i,235,10);
  floodfill(70+2*i,235,WHITE);
  setfillstyle(SOLID_FILL,RED);
  circle(130+2*i,235,10);
  floodfill(132+2*i,235,WHITE);
  line(20+2*i,225,220+2*i,225);
  line(20+2*i,225,50+2*i,180);         //CAR 1
  line(220+2*i,225,170+2*i,180);

   if(i>40)
   {


  rectangle(50+3*i,280,170+3*i,325);

  circle(70+3*i,335,10);
  circle(130+3*i,335,10);
  line(20+3*i,325,220+3*i,325);
  line(20+3*i,325,50+3*i,280);         //CAR 2
  line(220+3*i,325,170+3*i,280);
   delay(220);
  }
  else
  {

   rectangle(50+i,280,170+i,325);
  circle(70+i,335,10);
  circle(130+i,335,10);
  line(20+i,325,220+i,325);
  line(20+i,325,50+i,280);         //CAR 2
  line(220+i,325,170+i,280);
   delay(220);  }

     cleardevice();
 }
  gotoxy(3,3);
  printf("coded by\n__Shahnawaz shaikh");

  getch();
  closegraph();
  return 0;

  }


