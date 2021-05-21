#include<stdio.h>

int main()
{
    int a, b, c, d, m1, m2;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    m1 = a-b;
    m2 = c-d;

    if(m1 > m2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
