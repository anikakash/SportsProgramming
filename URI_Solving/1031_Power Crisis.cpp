#include<bits/stdc++.h>
using namespace std;
int remaining(int n, int k);
int main()
{
    int n, y;
    while(1){
        cin>>n;
    if(n==0) break;
        y=1;
        for( ; ; ){
            if(remaining(n,y)!=11) y++;
            else break;
        }
        printf("%d\n", y);
    }

    return 0;
}
int remaining(int n, int k)
{
    int i, r =0;
    for(i=1; i<n; i++){
        r = (r+k)%i;
    }
    return r;
}
