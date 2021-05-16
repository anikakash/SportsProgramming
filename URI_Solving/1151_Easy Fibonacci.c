#include<stdio.h>

int main()
{
    int n, i, N[100];
    scanf("%d", &n);
    N[0] = 0;
    N[1] = 1;
    for(i=2; i<n; i++){
        N[i] = N[i-1]+N[i-2];
    }
        printf("0");

        for(i=1; i<n;i++){
            printf(" %d", N[i]);
        }
        printf("\n");
    return 0;
}
