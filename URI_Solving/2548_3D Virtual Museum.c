#include<stdio.h>

int main()
{
    int n, m, value, i, result=0;
    while(scanf("%d %d", &n, &m) !=EOF)
    {
    for(i=1; i<=n; i++)
    {
        scanf("%d", &value);
        if(i > (n-m))
        {
            result = result+value;
        }
    }
    printf("%d\n", result);
    result = 0;
    }
    return 0;
}
