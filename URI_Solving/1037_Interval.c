#include<stdio.h>

int main()
{
    float a;
    scanf("%f",&a);
  //[0,25] (25,50], (50,75], (75,100]

    if(a>=0.00 && a<=25.00){
        printf("Intervalo [0,25]\n");
    }
    else if(a>=25.00 && a<=50.00){
         printf("Intervalo (25,50]\n");
        }
    else if(a>=50.00 && a<=75.00){
         printf("Intervalo (50,75]\n");
    }
    else if(a>=75.00 && a<=100.00){
         printf("Intervalo (75,100]\n");
    }
    else{
         printf("Fora de intervalo\n");
    }
    return 0;
}
