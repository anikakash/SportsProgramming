#include<stdio.h>

int main()
{
    int t, n;
    long long int div = 1;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        for(int i=1; i<=n; i++)
        {
            div*=i;

        }
         printf("%lld\n", div);
         div=1;


    }
    return 0;
}
