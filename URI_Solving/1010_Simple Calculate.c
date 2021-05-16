#include<stdio.h>

int main()
{
    int pc1, up1, pc2, up2;
    float  pp1, pp2, a, b, total;
    scanf("%d %d %f %d %d %f", &pc1, &up1, &pp1, &pc2, &up2, &pp2);
    a=up1*pp1;
    b=up2*pp2;
    total=a+b;
    printf("VALOR A PAGAR: R$ %.02f\n", total);
    return 0;
}

