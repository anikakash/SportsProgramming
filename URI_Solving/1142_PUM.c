#include<stdio.h>

int main()
{
    int n, i,j, x=1, y=3;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=x; j<=y; j++){
            printf("%d ", j);
        }
        printf("PUM\n");
        x+=4;
        y+=4;
    }
    return 0;
}
