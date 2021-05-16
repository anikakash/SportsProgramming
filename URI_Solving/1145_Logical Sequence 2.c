#include<stdio.h>

int main()
{
    int n, s, i, j;
    scanf("%d %d", &n, &s);


    for(i=1; i<=s; i++)
    {
        for(j=1; j<n; j++){
            printf("%d ", i++);
        }
        printf("%d\n",i);

    }
    return 0;
}
