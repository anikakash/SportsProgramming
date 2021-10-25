#include <bits/stdc++.h>
using namespace std;

int main(){
    #ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
#endif

    int n; scanf("%d",&n);
    printf("%d\n",((n*n)+(n-1)*(n-1)));


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}