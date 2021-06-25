#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,(char*)"");

    int i,xa[10],ya[10],xf,yf,xa1[10],ya1[10];
    float theta;
    cout<<"Enter the coordinates of triangle: "<<endl;
    for(i=0;i<3;i++){
        cin>>xa[i]>>ya[i];
    }
    cout<<"enter the rotating angle:";
    cin>>theta;
    theta = (theta*3.14)/180;
    cout<<"enter reference point:";
    cin>>xf>>yf;

    for(i=0;i<3;i++){
        xa1[i]=xf+(xa[i]-xf)*cos(theta)-(ya[i]-yf)*sin(theta);
        ya1[i]=yf+(xa[i]-xf)*sin(theta)+(ya[i]-yf)*cos(theta);
    }

    //before rotation
    for(i=0;i<3;i++){
        line(xa[i],ya[i],xa[(i+1)%3],ya[(i+1)%3]);
    }

    //after rotation
    for(i=0;i<3;i++){
        line(xa1[i],ya1[i],xa1[(i+1)%3],ya1[(i+1)%3]);
    }

    getch();
    closegraph();
    return 0;
}
