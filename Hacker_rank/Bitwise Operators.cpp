#include<bits/stdc++.h>
using namespace std;
int calculate_the_maxAnd(int a, int b){
    int maxAnd=0;
    int i, j;
    for(i=1; i<=a; i++){
        for(j=i+1; j<=a; j++){
            if(((i&j)>maxAnd) && ((i&j)<b)){
                maxAnd = i&j;
            }
        }
    }
    return maxAnd;
}
int calculate_the_maxOr(int a, int b){
    int maxOr=0;
    int i, j;
    for(i=1; i<=a; i++){
        for(j=i+1; j<=a; j++){
            if(((i|j)>maxOr) && ((i|j)<b)){
                maxOr = i|j;
            }
        }
    }
    return maxOr;
}
int calculate_the_maxXor(int a, int b){

    int maxXor=0;
    int i, j;
    for(i=1; i<=a; i++){
        for(j=i+1; j<=a; j++){
            if(((i^j)>maxXor) && ((i^j)<b)){
                maxXor = i^j;
            }
        }
    }
    return maxXor;
}
int main()
{
    int n, k;
    int maxAnd, maxOr, maxXor;
    scanf("%d %d", &n, &k);
    maxAnd = calculate_the_maxAnd(n,k);
    maxOr = calculate_the_maxOr(n,k);
    maxXor = calculate_the_maxXor(n,k);
    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
    return 0;
}
