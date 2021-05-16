#include <stdio.h>
#include<math.h>
int main()
{
     float a, c, b, d, distance1,distance2,distance ,m;
     scanf("%lf %lf %lf %lf", &a, &c, &b, &d);

    distance1 = b-a;
    distance2 = d-c;

    distance=(distance1*distance1)+(distance2*distance2);
    m= sqrt(distance);

     printf("%0.4lf\n",m);

    return 0;
}
