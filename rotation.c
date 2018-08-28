#include<stdio.h>
#include<graphics.h>
#include <math.h>
 

// for new co-ordinate
 void rotate( int x[], int y[] ,int edges, double angle, int cx, int cy )
{
        int i;
        double p, q;

        angle = -1 * (angle*3.14/180);

        double cos_a = cos(angle);

        double sin_a = sin(angle);

        for( i=0; i < edges; i++)

        {

               p = x[i]- cx;

               q = y[i] - cy;

               x[i] = ceil( (p * cos_a) - (q * sin_a) + cx );

               y[i]= ceil( (p * sin_a)+(q * cos_a) + cy );

        }

}

void draw(int x[],int y[]){
    
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[0], y[0]);
}
 
int main()
{
    int x[] = { 100, 200, 300 };
    int y[] = { 200, 100, 200 };
    int cx =100, cy = 200;
    int ang=90;
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm," ");
    draw(x,y);
    rotate(x, y, 3, ang, cx, cy);
    draw(x,y);
    getch();
 
    return 0;
}