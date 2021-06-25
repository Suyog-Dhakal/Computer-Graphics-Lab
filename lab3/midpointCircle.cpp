#include<iostream>
#include<graphics.h>
void plot(int xc,int yc,int x,int y)
{
    putpixel(x+xc,y+yc,WHITE);
    putpixel(y+xc,x+yc,WHITE);
    putpixel(y+xc,-x+yc,WHITE);
    putpixel(x+xc,-y+yc,WHITE);
    putpixel(-x+xc,-y+yc,WHITE);
    putpixel(-y+xc,-x+yc,WHITE);
    putpixel(-y+xc,x+yc,WHITE);
    putpixel(-x+xc,y+yc,WHITE);
}
int main(){
    int gd=DETECT, gm;
    int xc,yc,r,p,x,y;
    initgraph(&gd,&gm,(char*)"");

    std::cout<<"Enter the center of the circle :";std::cin>>xc>>yc;
    std::cout<<"Enter the radius of the circle :";std::cin>>r;
    x=0;
    y=r;
    p=1-r;
    plot(xc,yc,x,y);
    while(x<y){
        if(p<0){
            x++;
            y=y;
            p = p+2*x+1;
        }else{
            x++;
            y--;
            p = p+2*x+1-2*y;
        }
        plot(xc,yc,x,y);
    }
    getch();
    closegraph();
}



