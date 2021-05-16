#include<stdio.h>
#include<math.h>

int main()
{
    long long int t, n, k, sum;
    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld %lld", &n, &k);

        if(k*k <= n &&  n%2 == k%2 )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
