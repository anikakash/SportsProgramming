#include<stdio.h>

int main()
{
    long long int n1, n2;

    while(scanf("%lld %lld", &n1, &n2) != EOF  )
    {
      if(n1>n2)
    {
        printf("%lld\n", n1-n2);
    }
    else{
        printf("%lld\n", n2-n1);
    }
    }

    return 0;
}
