#include<stdio.h>

int main()
{
    double amu, tax, fee;

    scanf("%lf",&amu);

    if(0.00<= amu && amu <2000.01)
    {
        printf("Isento\n");
    }
    else if(2000.01 <= amu && amu < 3000.01)
    {
        fee = amu-2000.00;
        tax = fee*0.08;
        printf("R$ %.2lf\n", tax);
    }
    else if(3000.01 <= amu && amu <4500.01)
    {
        fee = amu-3000.00;
        tax = (fee*0.18)+(1000*.08);
        printf("R$ %.2lf\n",tax);
    }
    else{
        fee = amu-4500.00;
        tax = (fee*0.28)+(1000*0.08)+(1500*0.18);
        printf("R$ %.2lf\n",tax);
    }

    return 0;
}
