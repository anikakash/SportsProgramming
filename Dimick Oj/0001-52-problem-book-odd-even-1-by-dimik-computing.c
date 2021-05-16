#include<stdio.h>

int main()
{
    int i, t, a, reminder;
    scanf("%d",&t);

    for(i=0; i<t; i++){
        scanf("%d",&a);
        reminder=a%2;

            if(reminder==0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
    }

    return 0;
}

