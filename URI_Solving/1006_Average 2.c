#include<stdio.h>

int main()
{
    float A, B, C, avg;
    scanf("%f %f %f", &A, &B, &C);
    avg= ((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %0.1f\n", avg);
    return 0;
}

