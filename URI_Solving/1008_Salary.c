#include<stdio.h>

int main()
{
    int a, b;
    float x, d;
    scanf("%d %d %f", &a, &b, &x);
    d=b*x;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n", a, d);
    return 0;
}
