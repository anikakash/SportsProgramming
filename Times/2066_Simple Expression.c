#include<stdio.h>

int main()
{

    int a,b,c, ans, ans2;
    scanf("%d %d %d", &a, &b, &c);

    ans = a-(c*b);
    ans2 = (a-b-c);
    if(ans<ans2)
    {
        printf("%d\n", ans);
    }
    else
    {
        printf("%d\n", ans2);
    }

    return 0;

}
