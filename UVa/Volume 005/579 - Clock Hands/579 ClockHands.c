#include<stdio.h>
#include<stdlib.h>
int main()
{
    double h, m;
    double p1, p2, drg;
    while(scanf("%lf:%lf", &h, &m)){
    if(h ==0 && m ==0)
        return 0;
    else {
        p1 = ((h*30)+(m/2));
        p2 = (m*6);
        drg = p1-p2;
        if(drg<0){
            drg*=-1;
        }

        if(drg>180){
            drg = 360-drg;
        }

        printf("%.3lf\n", drg);
    }
    }
    return 0;
}
