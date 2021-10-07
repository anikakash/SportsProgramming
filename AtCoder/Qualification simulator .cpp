#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       1000005
#define EPS                      1e-10
#define dpoint(x)                fixed<<setprecision(x)
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("tmp.txt", "w", stdout);
#endif

    FASTERIO; //cmt when use scanf & printf ;

   int n, a,b;cin>>n>>a>>b;
   string s; cin>>s;
   int count1=0, count2=0;
   for(int i=0; i<s.size(); i++){
        if(s[i]=='c')cout<<"No"<<endl;
        else if(s[i]=='a'){
            if(count1+count2<a+b){
                cout<<"Yes"<<endl;
                count1++;
            }
            else cout<<"No"<<endl;
        }
        else{
            if(count2<b && count1+count2<a+b){
                cout<<"Yes"<<endl;
                count2++;
            }
            else cout<<"No"<<endl;
        }
   }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}