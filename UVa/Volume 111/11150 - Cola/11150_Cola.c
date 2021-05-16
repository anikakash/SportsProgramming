#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d", &n) !=EOF){
    n = n+n/2;
    printf("%d\n", n);
    }
    return 0;
}
