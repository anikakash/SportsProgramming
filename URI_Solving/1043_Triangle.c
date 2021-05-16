#include<stdio.h>

int main()
{
    double a, b, c, q, x;
        scanf("%lf %lf %lf",&a,&b,&c);
        x=a+b+c;
        if(a+b>c&&b+c>a&&c+a>b){
            printf("Perimetro = %.1lf\n",x);
        }
        else{
                q=(a+b)/2;
            printf("Area = %.1lf\n",q*c);
        }
    return 0;
}
