#include<stdio.h>

int main()
{
    int a, b, div, temp;
    scanf("%d %d", &a, &b);

    temp = b;
    do
    {
        div = b/a;
        b++;
    }while(b%a != 0);

    printf("%d", b-temp);
    return 0;
}
