#include <stdio.h>
int main()
{
    int a,b,c,ar[10];
    scanf("%d %d %d",&a,&b,&c);
    ar[0] = a+b*c;
    ar[1] = a*(b+c);
    ar[2] = a*b*c;
    ar[3] = (a+b)*c;
    ar[4] = a*b+c;
    ar[5] = a+b+c;
    int m=ar[0];
    for(int i=1;i<=5;i++)
    {
        if(ar[i]>m)
        {
            m=ar[i];
        }
    }
    printf("%d\n",m);

}
