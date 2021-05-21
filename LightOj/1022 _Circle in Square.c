#include<stdio.h>
#include<math.h>
int main()
{
    int i, t;
    double r, ans, carea, barea, pi;
     pi=2*acos(0.0);
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%lf", &r);
        carea= pi*r*r;
        barea = pow((2*r),2);
        ans= barea-carea;
        printf("Case %d: %.2lf\n", i, ans);
    }
    return 0;
}
