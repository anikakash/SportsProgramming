#include<stdio.h>

int main()
{
    float o, b, i;

    scanf("%f %f %f", &o, &b, &i);

    if(o < b && o < i)
    {
       printf("Otavio\n");
    }
    else if(b < o && b < i)
    {
        printf("Bruno\n");
    }
    else if(i < b && i < o)
    {
        printf("Ian\n");
    }
    else{
        printf("Empate\n");
    }
    return 0;
}
