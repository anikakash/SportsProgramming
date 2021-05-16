#include<stdio.h>

int main()
{
    int R;
    double pi=3.14159,  value;
    scanf("%d", &R);
    value=((4.0/3)*pi*R*R*R);

    printf("VOLUME = %0.3f\n", value);
    return 0;
}

