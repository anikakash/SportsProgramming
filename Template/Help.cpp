#include<bits/stdc++.h>
using namespace    std;

#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long int           ll;

void lucky_Number(ll n){
     if(n>1e10)return;
    
     lucky_Number(n*10+4);
     lucky_Number(n*10+7);
}


int main(){


       FASTERIO;
       
     int t;
    cin>>t;
    for(int j=1; j<=t; j++)
    {

        ll n;
        ll x, last, first, mid, c, r, diff;
        cin>>n;

        x = (sqrt(n-1))+1;
        last = x*x;

        first = ((x-1)*(x-1))+1;

        mid = (last+first)/2;

        if(n>mid && n<=last)
        {
            c = x;
            diff = last-n;
            r = diff+1;
        }
        else if(n<mid && n>=first)
        {
            diff = mid-n;
            c = x-diff;
            r = x;

        }
        else
        {
            c = x;
            r = x;
        }

           cout<<c<<" "<<r<<endl;

    }
 
   return 0;
}