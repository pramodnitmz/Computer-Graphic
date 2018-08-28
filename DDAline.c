#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <X11/Xlib.h>


void lineDDA(int x0,int y0,int x1,int y1)
{
	int dx=x1-x0, dy=y1-y0, steps,k;
	float xinc, yinc, x=x0, y=y0;
	steps=abs(dx)>abs(dy)?abs(dx):abs(dy);
	xinc = dx/(float)(steps);
	yinc = dy/(float)(steps);
	for (int i = 0; i < steps; ++i)
	{
		putpixel(x,y, WHITE);
		x+=xinc;
		y+=yinc;
		delay(100);
	}
}

int main()
{
	int gd= DETECT,gm;
	initgraph(&gd, &gm, NULL);
	lineDDA(10,20,200,300);
	getchar();
	return 0;
}
