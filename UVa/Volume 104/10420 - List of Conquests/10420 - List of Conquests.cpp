#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define debug(x)     cout<<x<<endl;

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

int main()
{
     #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
     #endif
   int t;
   cin>>t;
    vector<string>temp,temp2;
   flush;
   while(t--)
   {
        string s, w;
        getline(cin,s);
        int cnt=0;
        istringstream is(s);

        while(is >> w)
        {
            if(cnt==0){ temp2.push_back(w); temp.push_back(w);}
            cnt++;
        }
   }

   sort(temp.begin(), temp.end());
   int sz= unique(temp.begin(),temp.end())-temp.begin();

   for(int i=0; i<sz; i++) 
   {
        int c=0;
       for(int j=0; j<temp2.size(); j++)
            if(temp[i]==temp2[j]) c++;
       cout<<temp[i]<<" "<<c<<endl;
   }
    return 0;
}
