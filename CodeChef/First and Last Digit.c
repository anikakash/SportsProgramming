#include<stdio.h>

int main()
{
	int t, l, num, nu, s;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &s);
		nu=s%10;
		while(s>0){
			num =s%10;
			s=s/10;
		}
		l = nu+num;
		printf("%d\n", l);
		l = 0;
	}
	return 0;
}
