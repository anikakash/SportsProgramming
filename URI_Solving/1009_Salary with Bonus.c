#include<stdio.h>

int main()
{
    double a, b,sub,Total;
    char name;
    scanf("%s %lf %lf", &name, &a, &b);
    sub= b*0.15;
    Total = a+sub;
    printf("TOTAL = R$ %0.2f\n",Total);
    return 0;
}

