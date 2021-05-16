#include<stdio.h>
#include<math.h>

int main()
{
    double ak, bk, ck, tk;
    scanf("%lf %lf %lf",&ak,&bk,&ck);


    if(tk =(bk*bk)-(4*ak*ck)<0 || ak==0){
        printf("Impossivel calcular\n");
    }
    else {
        tk =sqrt((bk*bk)-(4*ak*ck));

        printf("R1 = %.5lf\nR2 = %.5lf\n",((-bk+tk)/(2*ak)),((-bk-tk)/(2*ak)));
    }
    return 0;
}
