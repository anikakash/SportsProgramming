#include<stdio.h>
#include<math.h>
int main()
{
    double meal_cost, tip, tax, total;
    int tip_per, tax_per, x;

    scanf("%lf %d %d", &meal_cost, &tip_per, &tax_per);

    tip = (tip_per*meal_cost)/100;
    tax = (tax_per*meal_cost)/100;

    total = meal_cost+tip+tax;
    x = round (total);
    printf("%d\n", x);
    return 0;
}
