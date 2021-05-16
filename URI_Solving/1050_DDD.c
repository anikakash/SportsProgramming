#include<stdio.h>

int main()
{
    int numbers;
    scanf("%d", &numbers);

    if(numbers == 61)
    {
        printf("Brasilia\n");
    }
    else if(numbers == 71)
    {
        printf("Salvador\n");
    }
    else if(numbers == 11)
    {
        printf("Sao Paulo\n");
    }
    else if(numbers == 21)
    {
        printf("Rio de Janeiro\n");
    }
    else if(numbers == 32)
    {
        printf("Juiz de Fora\n");
    }
    else if(numbers == 19)
    {
        printf("Campinas\n");
    }
    else if(numbers == 27)
    {
        printf("Vitoria\n");
    }
    else if(numbers == 31)
    {
        printf("Belo Horizonte\n");
    }
    else{
        printf("DDD nao cadastrado\n");
    }
    return 0;
}
