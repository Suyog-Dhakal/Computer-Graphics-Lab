#include<iostream>
#include<graphics.h>
#include<cmath>

using namespace std;

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,(char*)"");

    int i,xa[10],ya[10],sx,sy,rx,ry,xa1[10],ya1[10];

    cout<<"Enter the coordinates of triangle: "<<endl;
    for(i=0;i<3;i++){
        cin>>xa[i]>>ya[i];
    }
    cout<<"enter the scaling factor";
    cin>>sx>>sy;
    cout<<"enter reference point";
    cin>>rx>>ry;

    for(i=0;i<3;i++){
        xa1[i] = xa[i]*sx+rx*(1-sx);
        ya1[i] = ya[i]*sy+ry*(1-sy);
    }

    //before scaling
    for(i=0;i<3;i++){
        line(xa[i],ya[i],xa[(i+1)%3],ya[(i+1)%3]);
    }

    //after scaling
    for(i=0;i<3;i++){
        line(xa1[i],ya1[i],xa1[(i+1)%3],ya1[(i+1)%3]);
    }

    getch();
    closegraph();
    return 0;
}
