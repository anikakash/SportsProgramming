#include<stdio.h>

int main()
{
    int sth, km;
    float ans1,ans2;

    scanf("%d %d",&sth,&km);

    ans1=(sth*km);

    ans2=ans1/12;
    printf("%.3lf\n",ans2);

    return 0;
}
