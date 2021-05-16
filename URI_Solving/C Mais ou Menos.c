#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,sum,end,i;
    char c[101];//a[]="suco de laranja",b[]="morango fresco",d[]="mamao",e[]="goiaba vermelha",f[]="manga",g[]="laranja",h[]="brocolis";
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        else
        {
            sum=0;end=0;
            for(i=0; i<n; i++)
            {
                scanf("%d %[^\n]",&m, c);
                if(c[0]=='s')
                {
                    sum=sum+(m*120);
                }
                else if(c[0]=='m' && c[1]=='o' && c[2]=='r')
                {
                    sum=sum+(m*85);
                }
                else if(c[0]=='m' && c[1]=='a' && c[2]=='m')
                {
                    sum=sum+(m*85);
                }
                else if(c[0]=='g')
                {
                    sum=sum+(m*70);
                }
                else if(c[0]=='m' && c[1]=='a'&& c[2]=='n')
                {
                    sum=sum+(m*56);
                }
                else if(c[0]=='l')
                {
                    sum=sum+(m*50);
                }
                else if(c[0]=='b')
                {
                    sum=sum+(m*34);
                }
            }
            if(sum >=110 && sum<=130)
            {
                printf("%d mg\n",sum);
            }
            else if(sum>130)
            {
                end=sum-130;
                printf("Menos %d mg\n",end);
            }
            else if(sum<110)
            {
                end=110-sum;
                printf("Mais %d mg\n",end);
            }
        }
    }
    return 0;
}
