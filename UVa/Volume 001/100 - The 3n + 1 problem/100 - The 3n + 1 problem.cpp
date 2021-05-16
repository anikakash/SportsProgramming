#include <stdio.h>

int main(void) {
    long int a, b, d, j, k, i, n, s;
    while(scanf("%ld %ld", &a, &b)!=EOF){
        if(a>0 && a<1000000 && b>0 && b<1000000){
            d= 0;
            j = a;
            k = b;
            if(a>b){
                j =b;
                k = a;
            }
            for(i=j; i<=k; i++){
                n = i;
                s = 1;
                while(n!=1){
                    if(n%2==0){
                        n = n/2;
                        s++;
                    }
                    else{
                        n = 3*n+1;
                        s++;
                    }
                }
                if(d<s){
                    d = s;
                }
            }
            printf("%ld %ld %ld\n", a, b, d);
        }
    }
    return 0;
}

