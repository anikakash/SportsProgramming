#include<stdio.h>

int main()
{
    int n;
    double ans, p1, p2, p3;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%lf %lf %lf", &p1, &p2, &p3);
        ans = ((p1*2)+(p2*3)+(p3*5))/10.0;
        printf("%.1lf\n", ans);
    }
    return 0;
}
