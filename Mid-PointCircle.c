#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <X11/Xlib.h>
void circle(int radius,int cenX, int cenY)
{   
	int r=radius;
	int xc=cenX;
	int yc=cenY;
	int p;
	int x=0,y=r;
	p=1-r;//initial decision parameter
	do
	{
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc-x,yc+y,RED);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc-y,RED);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc-y,yc+x,RED);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc-y,yc-x,RED);
		x=x+1;
		if (p<0)
		{
			p=p+2*x+1;
		}
		else
		{
			y=y-1;
			p=p+2*x+1-2*y;
		}
	}
	while(x<y);

}
int main()
{

	int gd= DETECT,gm;
	initgraph(&gd, &gm, NULL);
	circle(50,50,50);
	getchar();
	return 0;
}
