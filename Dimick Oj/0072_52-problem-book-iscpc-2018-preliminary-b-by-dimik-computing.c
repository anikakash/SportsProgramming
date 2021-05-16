#include<stdio.h>
#include<math.h>

int main()
{
    int t, a, b, c;
    double s, area;
    scanf("%d", &t);

    while(t--)
    {
    scanf("%d %d %d", &a, &b, &c);

    if(a+b<c || b+c<a || c+a<b )
    {
        printf("Oh, No!\n");
    }
    else{
       s = (a+b+c)/2.0;
        area = sqrt(s * (s-a) * (s-b) * (s-c));
        printf("%.02lf\n",area);
    }
    }
    return 0;
}
