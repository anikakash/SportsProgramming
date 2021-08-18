#include<bits/stdc++.h>
using namespace    std;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back



int main(){
   
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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