#include<stdio.h>

int main()
{
    int  t, number, r, temp, sum;

        scanf("%d",&t);
    for(int i=0; i < t; i++){
	scanf("%d", &number);
    temp = number%10;
	while(number != 0)
    {
		r = number%10;
		number = number/10;
	}
    sum = temp+ r;

    printf("Sum = %d\n", sum);
    }

    return 0;
}
