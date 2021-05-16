#include<stdio.h>
//Coelho (rabbit in portuguese)
//Rato (rat  in portuguese)
//Sapo (frog in portuguese)
int main()
{
    int t, n, co=0, ra=0, sa=0, total;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %c", &n,&ch);
        if(ch == 'C')
        {
            co = co+n;
        }
        else if(ch == 'R')
        {
            ra = ra+n;
        }
        else if(ch == 'S')
        {
            sa = sa+n;
        }
    }
    total = co+ra+sa;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", co);
    printf("Total de ratos: %d\n", ra);
    printf("Total de sapos: %d\n", sa);
    printf("Percentual de coelhos: %.2lf %%\n", (co*1.0/total*1.0)*100);
    printf("Percentual de ratos: %.2lf %%\n", (ra*1.0/total*1.0)*100);
    printf("Percentual de sapos: %.2lf %%\n", (sa*1.0/total*1.0)*100);
    return 0;
}
