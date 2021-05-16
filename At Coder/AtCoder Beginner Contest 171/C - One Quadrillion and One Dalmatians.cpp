#include<bits/stdc++.h>
using namespace std;
void f(long long int n);
int main()
{
    long long int n;
    scanf("%lld",&n);
    f(n);
    return 0;
}
void f(long long int n)
{
    if(n==0)
        return;
    n--;
    f(n/26);
    putchar('a'+(n%26));
}
