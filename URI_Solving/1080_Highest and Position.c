#include<stdio.h>

int main()
{
    int array[100],i, j, larg;

    for(i=0; i<100; i++)
    {
        scanf("%d", &array[i]);
    }
    larg = array[0];
    for(i=1; i<100; i++)
    {
        if(array[i]>larg)
        {
            larg = array[i];
            j = i+1;
        }
    }
    printf("%d\n%d\n", larg, j);

    return 0;
}
