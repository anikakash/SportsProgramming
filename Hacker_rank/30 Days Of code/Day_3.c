#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n%2 == 0)
    {
        if(2 <= n && n <=5)
        {
            printf("Not Weird\n");
        }
        else if(6<= n && n <=20)
        {
            printf("Weird\n");
        }
        else{
            printf("Not Weird\n");
        }
    }
    else{
        printf("Weird\n");
    }
    return 0;
}
