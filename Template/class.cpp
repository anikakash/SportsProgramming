#include<bits/stdc++.h>
using namespace    std;


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int mul = a*b;
    printf("%lld\n", mul);



#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}