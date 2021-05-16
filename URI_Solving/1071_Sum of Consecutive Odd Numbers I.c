#include<stdio.h>

int main()
{
    int a, b, i, sum=0;
    scanf("%d %d", &a, &b);

    for(i= a-1; b<i; i--)
    {
        if(i%2 != 0)
        {
            sum = sum+i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
