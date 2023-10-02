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
   clrscr();

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
   setcolor(getmaxcolor());

   /* draw a diagonal line */
   line(120, 400, 120, 100);
   line(500, 100, 120, 100);
   line(500, 100, 500, 400);
   line(120, 400, 500, 400);
   line(120, 100, 500, 400);
   line(120, 400, 500, 100);
   line(310, 100, 310, 400);
   line(120, 250, 500, 250);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

