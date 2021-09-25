#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       100005
#define EPS                      1e-10
#define dpoint(x)                fixed<<setprecision(x)
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

int main()
{
#ifdef anikakash
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   std::map<ll, ll> mp;
   mp[0]=1;
   mp[2]=2;
   mp[3]=3;
   mp[5]=5;
   mp[6]=6;
   mp[7]=7;

   for(auto it:mp)
      cout<<it.first<<" "<<it.second<<endl;
    return 0;
}
