//#include<bits/stdc++.h>
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#define pi           (acos(-1.0)) //3.1415926535897932384626
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin);
#define fout         freopen("out.txt","w",stdout);

using namespace             std;
typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// ----------------------Pre made Functions---------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd(b%a, a);}
template <class T> T lcm(T a, T b){return ((a*b)/gcd(a, b));}
template <class T> T Digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

 // ----------------------------Slove----------------------------------//

int main()
{
   //fin
   //fout
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int arr[n];
      
      for(int i=0; i<n; i++)
      cin>>arr[i];

      vector <ll> prod_vc;
      vector<int> prod_seris;

      for(int i=0; i<n; i++)
      {
         for(int j=i+1; j<n; j++)
         {
            prod_vc.push_back(arr[i]*arr[j]);
         }
      }

      for(int i=0; i<prod_vc.size(); i++)
      {
         prod_seris.push_back( Digitsum( prod_vc[i] ) );
      }

      sort( prod_seris.begin(), prod_seris.end() );
      
      cout<<prod_seris[prod_seris.size()-1]<<endl;
   }
    return 0;
}
//author anikaksh; 
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link: 
