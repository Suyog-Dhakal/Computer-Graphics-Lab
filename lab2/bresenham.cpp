#include<iostream>
#include<graphics.h>
#include<cmath>

int main()
{
    int gd = DETECT,gm;
    int x1,y1,x2,y2,dx,dy,xinc,yinc,x,y,p0;
    initgraph(&gd,&gm,(char*)"");

    std::cout<<"enter x1,y1 : ";
    std::cin>>x1>>y1;
    std::cout<<"enter x2,y2 : ";
    std::cin>>x2>>y2;

    dx= abs(x2-x1);
    dy= abs(y2-y1);

    if(x2>x1)
        xinc=1;
    else
        xinc=-1;

    if(y2>y1)
        yinc=1;
    else
        yinc=-1;

    x=x1;y=y1;
    putpixel(x,y,WHITE);

    if(dx>dy){
        p0 = 2*dy-dx;
        for(int i=0;i<dx;i++){
            if(p0<0){
                x = x + xinc;
                y=y;
                p0 = p0 + 2*dy;
            }
            else{
                x = x + xinc;
                y = y + yinc;
                p0 = p0 + 2*dy-2*dx;
            }
            putpixel(x,y,WHITE);
        }
    }
    else{
        p0 = 2*dx-dy;
        for(int j=0;j<dy;j++){
            if(p0<0){
                x = x;
                y = y+ yinc;
                p0 = p0 + 2*dx;
            }else{
                x = x + xinc;
                y = y + yinc;
                p0 = p0 + 2*dx-2*dy;
            }
            putpixel(x,y,WHITE);
        }
    }
    getch();
    closegraph();
}
