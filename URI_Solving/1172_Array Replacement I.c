#include<stdio.h>

int main()
{
    int n[10], i, x;

    for(i=0; i<10; i++)
    {
        scanf("%d", &n[i]);
    }
    for(i=0; i<10; i++)
    {
       x =  n[i];
       if(x<=0)
       {
           printf("X[%d] = 1\n", i);
       }
       else if(x>0)
        {
            printf("X[%d] = %d\n",i, n[i]);
        }
    }
    return 0;
}
