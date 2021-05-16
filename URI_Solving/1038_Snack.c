#include<stdio.h>

int main()
{
    int x, y;
    double z;

    scanf("%d %d",&x,&y);
    if(x==1){
        z=4.0*y;
        printf("Total: R$ %.2lf\n",z);
    }
     else if(x==2){
        z=4.50*y;
        printf("Total: R$ %.2lf\n",z);
    }//1= 4.0; 2=4.50; 3=5.00; 4=2.00; 5=1.50;
     else if(x==3){
        z=5.00*y;
        printf("Total: R$ %.2lf\n",z);
    }
    else if(x==4){
        z=2.00*y;
        printf("Total: R$ %.2lf\n",z);
    }
    else if(x==5){
        z=1.50*y;
        printf("Total: R$ %.2lf\n",z);
    }



    return 0;
}
