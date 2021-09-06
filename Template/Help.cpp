#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back

int main(){

  FASTERIO; //cmt when use scanf & printf ;
  
   int tt;cin>>tt;
   while(tt--){
        int a,b; cin>>a>>b;
        int x = a^b;
        cout<< x <<endl;
      
   }


   return 0;
}