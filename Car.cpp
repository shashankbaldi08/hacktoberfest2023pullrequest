#include <iostream.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
   setcolor(getmaxcolor());
   int i=0;
   int j=0;
   while(i<639)
   {
   clrscr();
   setcolor(j);

   /* Truck Body */
   rectangle(25+i,125,120+i,220);

   /* Front Side */
   line(120+i,140,185+i,140);
   line(120+i,220,220+i,220);
   line(220+i,220,220+i,180);
   line(220+i,180,185+i,140);
   line(220+i,180,120+i,180);
   line(185+i,140,185+i,220);

   /* Tires */
   circle(60+i,246,25);
   circle(180+i,246,25);
   i=i+10;
   if(j<15)
   {
	j++;
   }
   else
   {
	j=0;
   }
   delay(100);
   }

   /* Road */
   line(0,271,639,271);

   /* clean up */
   getch();
   closegraph();
   return 0;
}
