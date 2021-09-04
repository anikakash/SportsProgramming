#include<bits/stdc++.h>
using namespace    std;


// Debugger
#define debugNS(a,b,c)             cout<<a<<b<<c;
#define debugN(b)               cout<<b<<endl;


int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif
  
    int t;cin>>t;
    while(t--){
        vector<int>v(3);
        for(int i=0; i<3; i++)cin>>v[i];
            int d, e;
        cin>>d>>e;
        sort(v.begin(), v.end());
        if(v[0]<=e){
            if(v[1]+v[2]<=d)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}