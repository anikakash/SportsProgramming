#include<stdio.h>

int main()
{
    int N[10], x, i;
    scanf("%d", &x);

    for(i=0; i<10; i++)
    {
        printf("N[%d] = %d\n", i, x);
        x=x*2;
    }
    return 0;
}
