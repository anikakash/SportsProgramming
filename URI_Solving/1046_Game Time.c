#include<stdio.h>

int main()
{
    int t1, t2, time;
    scanf("%d %d",&t1, &t2);

    if(t1 == t2)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(t2 > t1)
    {
        time = t2-t1;
        printf("O JOGO DUROU %d HORA(S)\n", time);
    }
    else if(t1 > t2)
    {
        time = (t2+24)-t1;
        printf("O JOGO DUROU %d HORA(S)\n", time);
    }
    return 0;
}
