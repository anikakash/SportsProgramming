#include<stdio.h>

int main()
{

    long long int n, sum=0;
    int i;
    while(scanf("%lld", &n), n>=0)
    {
        for(i=1; i<=n; i++)
        {
            sum = i+sum;
        }
        printf("%lld\n", sum+1);
        sum =0;

    }
    return 0;
}
