#include<stdio.h>

int main()
{
    int t, n, sum = 0;;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
    while(n>0){
        n = n/5;
        sum = sum+n;
    }
    printf("%d\n", sum);
    sum = 0;
    }

    return 0;
}

