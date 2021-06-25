#include<graphics.h>
#include<iostream>
#include<cmath>
int main()
{
    int gd=DETECT, gm;
    int x1,y1,x2,y2,step,dx,dy,i;
    float x,y,xinc,yinc;
    initgraph(&gd,&gm,(char*)"");
    std::cout<<"digital differential line algorithm"<<std::endl;
    std::cout<<"Enter x1,y1: "; std::cin>>x1>>y1;
    std::cout<<"Enter x2,y2: "; std::cin>>x2>>y2;

    dx= x2-x1;
    dy= y2-y1;

    if(abs(dx)>abs(dy))
        step = abs(dx);
    step = abs(dy);

    xinc = dx/(float)step;
    yinc = dy/(float)step;

    x=x1;y=y1;
    putpixel(x,y,WHITE);

    for(i=0;i<step;i++){
        x=x+xinc;
        y=y+yinc;
        putpixel(round(x),round(y),WHITE);
    }
    getch();
    closegraph();
}
