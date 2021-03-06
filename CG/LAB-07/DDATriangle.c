#include<stdio.h>
#include<graphics.h>
#include<math.h>
 
void DDA(int X0, int Y0, int X1, int Y1)
{

    int dx = X1 - X0;
    int dy = Y1 - Y0;
 

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
 

    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;
 
    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (X,Y,GREEN); 
        X += Xinc;           
        Y += Yinc;
	delay(5);                
    }
}
 
int main()
{
    int gd = DETECT, gm;
    initgraph (&gd, &gm, "");   
    DDA(0,10,640,10);
    DDA(640,10,320,480);
    DDA(320,480,0,10);
   // DDA(640,240,0,240);    
    getchar();
    return 0;
} 
