#include<bits/stdc++.h>
using namespace    std;


int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

    int t;cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(a<=e){
            if(b+c<=d)cout<<"YES"<<endl;
        }
        else if(b<=e){
            if(a+c<=d)cout<<"YES"<<endl;
        }
        else if(c<=e){
            if(a+b<=d)cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}