#include<stdio.h>

int main()
{
    int s, t, v;

    while(scanf("%d %d", &v, &t) != EOF){
            s = 2*(t*v);
            printf("%d\n", s);
          }
    return 0;
}
