#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode;
   int xmax, ymax;
   float x1,x2,y1,y2;
   float dx,dy;
   float length;
   float dx1,dy1;
   float sx,sy;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
   setcolor(getmaxcolor());

   cout<<"Enter the value of x1 and y1:";
   cin>>x1>>y1;
   cout<<"Enter the value of x2 and y2:";
   cin>>x2>>y2;

   clrscr();
   dx=abs(x2-x1);
   dy=abs(y2-y1);

   if(dx>dy)
   {
	length=dx;
   }
   else
   {
	length=dy;
   }
   dx1=dx/length;
   dy1=dy/length;

   float dx2=x1;
   float dy2=y1;

   if(dx1>0)
   {
	sx=1;
   }
   else if(dx1<0)
   {
	sx=-1;
   }
   else
   {
	sx=0;
   }
   dx2=x1+0.5*(sx);

   if(dy1>0)
   {
	sy=1;
   }
   else if(dy1<0)
   {
	sy=-1;
   }
   else
   {
	sy=0;
   }
   dy2=y1+0.5*(sy);

   int i=1;
   while(i<=length)
   {
	putpixel(int(dx2),int(dy2),15);
	dx2=dx2+dx1;
	dy2=dy2+dy1;
	i=i+1;
   }

   /* clean up */
   getch();
   closegraph();
   return 0;
}
