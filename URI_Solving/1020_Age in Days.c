#include<stdio.h>

int main()
{
    int y, ano, mess, dia;
    scanf("%d",&y);

    ano=y/365;
    y%=365;
    mess=y/30;
    y%=30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mess,y);
    return 0;
}
