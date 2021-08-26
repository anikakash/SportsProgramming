#include<bits/stdc++.h>
using namespace    std;
typedef long long int           LL;


int main(){
  
  int n; cin>>n; 
     while(n--){
        int sz; cin>>sz;
        vector<int>v(sz);
        for(int i=0; i<sz; i++)cin>>v[i];
            int cnt=0;
        bool flg = false;
           for(int i=0; i<sz; i++){
                for(int j=0; j<sz-1; j++){
                    if(v[j]>v[j+1]){
                        swap(v[j],v[j+1]);
                        j++;;
                        flg = true;
                    }
                }
                if(flg){cnt++; flg = false;}
                // for(auto it:v) cout<<it<<" ";
                //     NL;
           }

            cout<<cnt<<endl;
            // for(auto it:v)
            //     cout<<it<<" ";
            // NL;
     }
   return 0;
}

