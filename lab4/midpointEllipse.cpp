#include<iostream>
#include<graphics.h>


int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    float x,y,xc,yc,rx,ry,p0,p;
    std::cout<<"Enter xc,yc :";std::cin>>xc>>yc;
    std::cout<<"Enter rx,ry :";std::cin>>rx>>ry;

    x=0;
    y=ry;

    p = ry*ry-rx*rx*ry+(rx*rx)/4;

    do{
        putpixel(x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);

        if(p<0){
            x++;
            y=y;
            p = p+2*ry*ry*x+ry*ry;
        }else{
            x++;
            y--;
            p = p+2*ry*ry*x-2*rx*rx*y+ry*ry;
        }
    }while(2*ry*ry*x < 2*rx*rx*y);

    p = ry*ry*(x+0.5)*(x+0.5) + rx*rx*(y-1)*(y-1) - rx*rx*ry*ry;

    do{
        putpixel(x+xc,y+yc,WHITE);
        putpixel(x+xc,-y+yc,WHITE);
        putpixel(-x+xc,-y+yc,WHITE);
        putpixel(-x+xc,y+yc,WHITE);

        if(p>0){
            x=x;
            y--;
            p = p-2*rx*rx*y+rx*rx;
        }else{
            x++;
            y--;
            p = p+2*ry*ry*x - 2*rx*rx*y + rx*rx;

        }
    }while(y!=0);
    getch();
    closegraph();
    return 0;

}
