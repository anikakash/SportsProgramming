#include<bits/stdc++.h>
using namespace std;
int is_prime(int n);

int main()
{
    int n;
    scanf("%d", &n);
    if(1==is_prime(n)){
        printf("Yes\n");
    }
    else printf("No\n");
    return 0;
}
int is_prime(int n)
{
    int i, root;
    if(n==2) return 1;
    if(n%2==0 || n==1) return 0;

    root = sqrt(n);
    for(i=3; i<=root; i = i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
