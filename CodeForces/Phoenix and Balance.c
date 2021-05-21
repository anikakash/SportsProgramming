#include<stdio.h>
#include<math.h>
int main()
{
    int t, n, j, pile1, pile2;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        pile1=0, pile2=0;
        for(j=1; j<n; j++){
            if(j<n/2) pile1+= pow(2,j);
            else pile2+= pow(2,j);
        }
            pile1+= pow(2,n);
             printf("%d\n", pile1-pile2);
        }
    return 0;
}
