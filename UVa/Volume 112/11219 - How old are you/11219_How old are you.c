#include<stdio.h>

int main()
{
    int t, i, d, d2, m, m2, year, year2, age;

    scanf("%d", &t);

   for(i=1; i<=t; i++)
    {
        scanf("%d/%d/%d", &d,&m,&year);
        scanf("%d/%d/%d", &d2,&m2,&year2);
        age = year-year2;

        if(m2 > m) age-- ;
        if(m == m2 && d2 > d) age--;
        if(age < 0) printf("Case #%d: Invalid birth date\n", i);
        else if(age > 130) printf("Case #%d: Check birth date\n", i);
        else printf("Case #%d: %d\n", i, age);
    }



    return 0;
}
