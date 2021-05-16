#include<stdio.h>

int main()
{
    int n, Al=0, Ga=0, Di=0;
    while(1){
        scanf("%d", &n);
        if(n==1){
            Al++;
        }
        else if(n==2){
            Ga++;
        }
        else if(n==3){
            Di++;
        }
        else if(n==4){
            printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",Al, Ga, Di);
            break ;
        }
    }
    return 0;
}
