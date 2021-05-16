#include<stdio.h>

int main()
{
	int number, r, t, sum=0;
	scanf("%d", &t);
	while(t--){
	scanf("%d", &number);

	while(number>0){
		r=number%10;
		number=number/10;
		sum = sum+r;
	}
	printf("%d\n",sum);
	sum=0;
	}
	return 0;
}
