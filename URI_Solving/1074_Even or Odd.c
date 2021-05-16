#include<stdio.h>

int main()
{

    int num, i, a2, akash;
    scanf("%d",&num);
    for(i=0; i<num; i++){
        scanf("%d",&a2);

        akash=a2%2;
            if(a2==0){

            printf("NULL\n");

         }

         else if(akash==0){
                if(a2<0){
            printf("EVEN NEGATIVE\n");
                }
                else if(a2>0){
                    printf("EVEN POSITIVE\n");
                }
         }
         else if(akash !=0){
                if(a2<0){
                    printf("ODD NEGATIVE\n");
                }
                else if(a2>0){
                    printf("ODD POSITIVE\n");
                }
         }

    }
    return 0;
}
