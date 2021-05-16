#include<stdio.h>

int main()
{
    int d1, d2, h1, h2, m1, m2, s1, s2,p1, p2, n, w, x, y, z;
    scanf("%*s %d",&d1);
    scanf("%d %*s",&h1);
    scanf("%d %*s",&m1);
    scanf("%d",&s1);

    scanf("%*s %d",&d2);
    scanf("%d %*s",&h2);
    scanf("%d %*s",&m2);
    scanf("%d",&s2);

    p1 = s1+(m1*60)+(h1*60*60)+(d1*(24*60*60));
    p2 = s2+(m2*60)+(h2*60*60)+(d2*(24*60*60));
    n =p2-p1;
    w = n/86400;
    n = n%86400;
    x = n/3600;
    n = n%3600;
    y = n/60;
    z = n%60;
    printf("%d dia(s)\n", w);
    printf("%d hora(s)\n",  x);
    printf("%d minuto(s)\n", y);
    printf("%d segundo(s)\n",  z);
    return 0;
}
