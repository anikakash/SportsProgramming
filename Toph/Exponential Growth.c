#include<stdio.h>
#include<math.h>

int main()
{
    int n, x, y;

    scanf("%d %d", &x, &n);

    y = pow(x,n);

    printf("%d\n", y);
    return 0;
}
