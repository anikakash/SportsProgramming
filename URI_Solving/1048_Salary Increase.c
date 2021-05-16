/*
0 - 400.00 = 15%;
400.01 - 800.00 = 12%;
800.01 - 1200.00 = 10%;
1200.01 - 2000.00 = 7%;
Above 2000.00 = 4%;
salary persantage rate;
*/
#include<stdio.h>

int main()
{
    double salary, persantage, salary2, sum;
    char c= '%';
    scanf("%lf", &salary);

    if(salary <= 400.00)
    {
        salary2 = salary*0.15;
        sum = salary+salary2;
        persantage = sum - salary;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n", sum, persantage, 15, c);
    }
    else if(salary <= 800.00)
    {
        salary2 = salary*0.12;
        sum = salary+salary2;
        persantage = sum - salary;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n", sum, persantage, 12, c);

    }
    else if(salary <= 1200.00)
    {
        salary2 = salary*0.1;
        sum = salary+salary2;
        persantage = sum - salary;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n", sum, persantage, 10, c);
    }
    else if(salary <= 2000.00)
    {
        salary2 = salary*0.07;
        sum = salary+salary2;
        persantage = sum - salary;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n", sum, persantage, 7, c);
    }
     else if(salary > 2000.00)
    {
        salary2 = salary*0.04;
        sum = salary+salary2;
        persantage = sum - salary;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %c\n", sum, persantage, 4, c);
    }

    return 0;
}
