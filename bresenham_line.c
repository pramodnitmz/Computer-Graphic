#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <X11/Xlib.h>

void lineBres(int x0, int y0, int xE, int yE)
{
	int dx=xE-x0, dy=yE-y0;
	int p=2*dy-dx;
	int twoDy=2*dy;
	int twoDyMinusDx=2*(dy-dx);
	int x=x0, y=y0;
	putpixel(x,y,WHITE);
	while(x<xE){
		x++;
	if (p<0)
	{
	 p+=twoDy;
	}
	else
	{
		y++;
		p+=twoDyMinusDx;
	}
	putpixel(x,y,WHITE);
	delay(100);
   }
}
int main()
{
	int gd= DETECT,gm;
	initgraph(&gd, &gm, NULL);
	lineBres(100,200,200,300);
	getchar();
	return 0;
}
