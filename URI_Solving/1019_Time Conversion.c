#include<stdio.h>

int main()
{
    int h, n, m;

    scanf("%d",&n);

    h=n/3600;
    n=n-(h*3600);

    m=n/60;
    n=n-(m*60);
    printf("%d:%d:%d\n",h,m,n);
    return 0;
}
