#include<stdio.h>
#include<math.h>

int main()
{
    double n,p;
    double ans;

    while(scanf("%lf %lf", &n, &p) != EOF)
    {
        ans = pow(p,1/n);
        printf("%.0lf\n", ans);
    }
    return 0;
}
