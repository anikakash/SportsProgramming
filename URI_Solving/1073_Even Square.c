#include<stdio.h>
#include<math.h>

int main()
{
    int i, n, t;
    scanf("%d", &n);

    for(i=2; i<=n; i=i+2)
    {
        t = pow(i,2);
        printf("%d^2 = %d\n", i, t);
    }


    return 0;
}

