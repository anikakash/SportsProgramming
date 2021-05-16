#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, big=0;
    cin>>t;
    while(t--){
        cin>>a;
        if(a>0&&a>=big) big = a;
    }
    printf("%d\n",big);
    return 0;
}
