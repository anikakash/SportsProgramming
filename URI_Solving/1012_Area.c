#include <stdio.h>

int main()
{
    double a, b, c,pi=3.14159, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    scanf("%lf %lf %lf", &a, &b, &c);
    TRIANGULO=0.5*a*c;
    CIRCULO= c*c*pi;
    TRAPEZIO=((a+b)/2)*c;
    QUADRADO=b*b;
    RETANGULO=a*b;

    printf("TRIANGULO: %0.3f\n",TRIANGULO);
    printf("CIRCULO: %0.3f\n",CIRCULO);
    printf("TRAPEZIO: %0.3f\n",TRAPEZIO);
    printf("QUADRADO: %0.3f\n",QUADRADO);
    printf("RETANGULO: %0.3f\n",RETANGULO);

    return 0;
}
