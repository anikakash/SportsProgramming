#include<stdio.h>

int main()
{
   double n;
   int a, b, c, d, e, f, g, h, i, j, k, l, m, o, p, q, r ,s, t, u;

    scanf("%lf",&n);

    q= n*100;
    a=q/10000;
    q=q%10000;
    b=q/5000;
    q=q%5000;
    c=q/2000;
    q=q%2000;
    d=q/1000;
    q=q%1000;
    e=q/500;
    q=q%500;
    f=q/200;
    q=q%200;
    g=q/100;
    q=q%100;
    h=q/50;
    q=q%50;
    i=q/25;
    q=q%25;
    j=q/10;
    q=q%10;
    k=q/5;
    q=q%5;



   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n",a);
   printf("%d nota(s) de R$ 50.00\n",b);
   printf("%d nota(s) de R$ 20.00\n",c);
   printf("%d nota(s) de R$ 10.00\n",d);
   printf("%d nota(s) de R$ 5.00\n",e);
   printf("%d nota(s) de R$ 2.00\n",f);


   printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n",g);
   printf("%d moeda(s) de R$ 0.50\n",h);
   printf("%d moeda(s) de R$ 0.25\n",i);
   printf("%d moeda(s) de R$ 0.10\n",j);
   printf("%d moeda(s) de R$ 0.05\n",k);
   printf("%d moeda(s) de R$ 0.01\n",q);



    return 0;
}
