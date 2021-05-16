#include<stdio.h>

int main()
{
    int i, t, a, b, c;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a<b && b<c || c<b && b<a)
        {
            printf("Case %d: %d\n", i, b);
        }
        else if(c<a && c<b || b<a && a<c)
        {
            printf("Case %d: %d\n", i, a);
        }
        else
        {
            printf("Case %d: %d\n", i, c);
        }
    }
    return 0;
}
