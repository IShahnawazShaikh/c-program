#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{

   int i,j,gd=DETECT,gm=0;
   initgraph(&gd,&gm," ");
  // setbkcolor(BLUE);
   /*****CAR BODY********/
  for(i=0;i<600;i++)
  {

   line(50+i,370,90+i,370);
   arc(110+i,370,0,180,20);
   line(130+i,370,220+i,370);
   arc(240+i,370,0,180,20);
   line(260+i,370,300+i,370);
   line(300+i,370,300+i,350);
   line(300+i,350,240+i,330);
   line(240+i,330,200+i,300);
   line(200+i,300,110+i,300);
   line(110+i,300,80+i,330);
   line(80+i,330,50+i,340);
   line(50+i,340,50+i,370);
   outtextxy(136+i,359,"jaguar XJ");

   /****** CAR WINDOW *******/
   line(165+i,305,165+i,330);
   line(165+i,330,230+i,330);
   line(230+i,330,195+i,305);
   line(195+i,305,165+i,305);

   line(160+i,305,160+i,330);
   line(160+i,330,95+i,330);
   line(95+i,330,120+i,305);
   line(120+i,305,160+i,305);


   /***** WHEELS ******/
   circle(110+i,370,17);
   circle(240+i,370,17);

   line(0,390,639,390);    //road
   setfillstyle(SOLID_FILL,RED);
   circle(600,50,25);
   floodfill(600,50,WHITE);
   outtextxy(585,50,"SUN"); //sun
   outtextxy(100,200,"program made by SHAHNAWAZ");
  if(i==599)
   {
     for(j=0;j<240;j++)
   {
    line(50+3*j,370,90+3*j,370);
    arc(110+3*j,370,0,180,20);
    line(130+3*j,370,220+3*j,370);
    arc(240+3*j,370,0,180,20);
    line(260+3*j,370,300+3*j,370);
    line(300+3*j,370,300+3*j,350);
    line(300+3*j,350,240+3*j,330);
    line(240+3*j,330,200+3*j,300);
    line(200+3*j,300,110+3*j,300);
    line(110+3*j,300,80+3*j,330);
    line(80+3*j,330,50+3*j,340);
    line(50+3*j,340,50+3*j,370);
    outtextxy(136+3*j,359,"FERRARI ");

   /****** CAR WINDOW *******/
   line(165+3*j,305,165+3*j,330);
   line(165+3*j,330,230+3*j,330);
   line(230+3*j,330,195+3*j,305);
   line(195+3*j,305,165+3*j,305);

   line(160+3*j,305,160+3*j,330);
   line(160+3*j,330,95+3*j,330);
   line(95+3*j,330,120+3*j,305);
   line(120+3*j,305,160+3*j,305);


   /***** WHEELS ******/
    circle(110+3*j,370,17);
    circle(240+3*j,370,17);

    line(0,390,639,390);    //road
    circle(600,50,25);
    setfillstyle(SOLID_FILL,RED);
    outtextxy(585,50,"SUN"); //sun
    floodfill(600,50,WHITE);
    outtextxy(100,200,"program made by SHAHNAWAZ");
    delay(50);
    cleardevice();

   }
 }

   delay(50);
   cleardevice();
  }
   getch();
  return 0;
}