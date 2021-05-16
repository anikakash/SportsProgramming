#include<stdio.h>

int main()
{
    int fh, fm, lh, lm, t1, t2, time2, time;
    scanf("%d %d %d %d", &fh, &fm, &lh, &lm);
    t1 = (fh*60)+fm;
    t2 = (lh*60)+lm;
    time = t2-t1;
    if(t1==t2)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(time<0)
    {
        time2= 1440+time;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", time2/60, time2%60);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", time/60, time%60);
    }
    return 0;
}
