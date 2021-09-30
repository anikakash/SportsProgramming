#include<bits/stdc++.h>
using namespace    std;

int main() {
 


    int tt; cin>>tt;
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    
      while(tt--){
          int x; cin>>x;
          bool f = false;
          for(int i=0; i<n; i++){
            if(v[i]==x){
              cout<<x<<" is find at index "<<i+1<<endl;
              f = true;
            }
          }
          if(!f)cout<<x<<" is not found "<<endl;
      }

    return 0;
}