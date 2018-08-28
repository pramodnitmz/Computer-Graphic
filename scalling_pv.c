#include<stdio.h>
#include<graphics.h>
#include <math.h>
 

// for new co-ordinate
 void scale( int x[], int y[] ,int edges, int sx,int sy, int cx, int cy )
{
        int i;
        double p, q;

        for( i=0; i < 4; i++)

        {

               p = x[i]- cx;

               q = y[i] - cy;

               x[i] = p*sx + cx ;

               y[i]= q*sy +cy ;

        }

}
void draw(int x[],int y[]){
    
    line(x[0], y[0], x[1], y[1]);
    line(x[1], y[1], x[2], y[2]);
    line(x[2], y[2], x[3], y[3]);
    line(x[3], y[3], x[0], y[0]);
}
int main()
{
    int x[] = { 100,200,200,100};
    int y[] = { 100,100,200,200};
    int cx =1, cy = 10;
    int sx=2, sy=2;
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm," ");
    draw(x,y);
    scale(x, y, 4, sx, sy,cx, cy);
    draw(x,y);
    getch();
 
    return 0;
}