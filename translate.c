#include<stdio.h>
#include<graphics.h>
#include <math.h>
 
 void translate( int x[], int y[] ,int edges, int tx, int ty )
{
        int i;
        for( i=0; i < edges; i++)

        {

               x[i] = x[i] + tx ;

               y[i]= y[i] +ty ;

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
    int tx =0, ty = 50;
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm," ");
    draw(x,y);
    translate(x, y, 3, tx, ty);
    draw(x,y);
    getch();
 
    return 0;
}