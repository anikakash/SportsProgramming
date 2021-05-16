#include<stdio.h>

int main()
{
    char c[100001];
    scanf("%s",  c);
    if(c[0]>96)
    {
    c[0] = c[0] - 32;
    }
        printf("%s", c);
    return 0;
}
