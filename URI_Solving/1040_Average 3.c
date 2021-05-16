#include<stdio.h>

int main()
{
    double n1, n2, n3, n4, n5, ave1, ave2;

    scanf("%lf %lf %lf %lf",&n1, &n2, &n3, &n4);
    ave1=((n1*2)+(n2*3)+(n3*4)+n4)/10;
    printf("Media: %.1lf\n",ave1);
    if(ave1>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(ave1<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(5.0<= ave1 <=6.9){
        printf("Aluno em exame.\n");
            scanf("%lf",&n4);
            printf("Nota do exame: %.1lf\n",n4);
            ave2 = (ave1+n4)/2;
            if(ave2>=5.0){
                printf("Aluno aprovado.\n");
            }
            else{
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1lf\n",ave2);
    }
    return 0;
}
