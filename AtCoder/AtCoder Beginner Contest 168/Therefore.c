#include<stdio.h>

int main()
{
    int n, last_digit;
    scanf("%d", &n);
    last_digit = n%10;
    if(last_digit == 2 ||last_digit ==  4 || last_digit == 5||last_digit ==  7||last_digit ==  9){
        printf("hon\n");
    }
    else if(last_digit == 0||last_digit ==  1||last_digit ==  6||last_digit ==  8){
        printf("pon\n");
    }
    else if(last_digit == 3){
        printf("bon\n");
    }
    return 0;
}
