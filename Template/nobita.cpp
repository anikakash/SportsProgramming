#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     100005 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;


void ans(){



    int n, h, m; cin>>n>>h>>m;
   vector<pair<int,int>>v;
   for(int i=0; i<n; i++){
        int x, y; cin>>x>>y;
        v.pb({x,y});
   }
   sort(v.begin(), v.end());
   for(int i=0; i<n;i++){
        if((v[i].first==h)&&(v[i].second==m)){
            cout<<"0 0"<<endl; return;


        }
    }
    for(int i=0; i<n;i++){

        if((v[i].first==h)&&(v[i].second!=m)){

            cout<<0<<" "<<v[i].second-m<<endl; return;

        }
    }
   if(v[0].first<h){

        if(m==0){

            int hh = (24-h)+v[0].first;
            int mm = v[0].second;
            cout<<hh<<" "<<mm<<endl;

        }
        else{

            int hh = (23-h)+v[0].first;
            int mm = (60-m)+v[0].second;
            cout<<hh<<" "<<mm<<endl;
        }


   }

   else if(v[0].first>h){
        if(m==0){
            int hh = v[0].first-h;
            int mm = v[0].second;
            cout<<hh<<" "<<mm<<endl;
        }
        else{
            int hh = v[0].first-h;
            int mm = (60-m)+v[0].second;
            hh--;
           cout<<hh<<" "<<mm<<endl;
        }
   }


}
int main() {


    FASTERIO;

    int tt; cin>>tt;
    
    while(tt--){
         ans();
    }
    return 0;
    
}

