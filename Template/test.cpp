#include<bits/stdc++.h>
using namespace    std;

int main(){
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("output.txt","w",stdout); 
  #endif

       int n; cin>>n;
       vector<int>v(n);
        for(int i=0; i<n; i++){
          int x; cin>>x;
          v.push_back(x);
        }
        v.push_back(10);


       for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";




    
      cout<<fixed<<setprecision(3)<<ans<<endl;




      #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}

