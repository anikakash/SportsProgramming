#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==2002)
        {
            printf("Acesso Permitido\n");
            return 0;
        }

        else
        {
            printf("Senha Invalida\n");
        }

    }


    return 0;
}
