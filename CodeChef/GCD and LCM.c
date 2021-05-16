#include <stdio.h>

int main() {
	int t;
	long long int a, b, lcm, gcd, n1, n2, rem;
	scanf("%d", &t);
	while(t--){
        scanf("%lld %lld", &a, &b);
        n1 = a;
        n2 = b;
        /*if(a==0) gcd = a;
        else if(b==0) gcd = b;*/
            while(n2 != 0){
                rem = n1%n2;
                n1 = n2;
                n2 = rem;
            }
        gcd = n1;
        lcm = (a*b)/gcd;
        printf("%lld %lld\n", gcd, lcm);
	}
	return 0;
}
