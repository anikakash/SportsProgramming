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
     // #ifndef ONLINE_JUDGE
     //    clock_t tStart = clock();
     //    freopen("input.txt","r",stdin);
     //    freopen("ans.txt","w",stdout);
     // #endif
   int t, cnt=1;
    while(cin>>t)
    {
        if(t==0)return 0;
        cout<<"Case "<<cnt<<":"<<endl;
        vector<string> v;
        for(ll i=1; i<=t; i++)
        {
            string n;
            cin>>n;
            v.push_back(n);
        }
       
        vector<int> tmp(t,0);
        for(int i=1; i<t; i++)
        {
            if(stoi(v[i])-stoi(v[i-1])==1)tmp[i]=1;
        }
        // for(int i=0; i<t; i++)
        //     cout<<tmp[i]<<endl;
       
        string start="", end="", test="";
        for(int i=1; i<t; i++)
        {
            if(tmp[i]==1 && tmp[i-1]==0 && i+1<t) {start = v[i-1]; }
            else if(tmp[i]==0 && tmp[i-1]==1) end = v[i-1];
            else if(tmp[i]==1 && i+1==t){ end = v[i]; if(tmp[i-1]==0) start = v[i-1];}

            if(start!="" && end!="")
            {
               //cout<<i<<" "<<start<<" "<<end<<endl;
                cout<<start<<"-";
                for(int j=0; j<start.size(); j++)
                {
                    if(start[j]!=end[j])
                        {
                            for(int c=j; c<start.size(); c++)
                            {
                                cout<<end[c];
                            }
                            break;
                        }
                }
                cout<<endl;
                start="", end="";
                //cout<<i<<" "<<start<<" "<<end<<endl;
            }
            if(tmp[i]==0 && tmp[i-1]==0){cout<<v[i-1]<<endl;}
            if(tmp[i]==0 && i+1==t){cout<<v[i]<<endl;}
        }
        if(v.size()==1)cout<<v[0]<<endl;
        //cout<<start<<" "<<end<<endl;
         cout<<endl;
         cnt++;
    }
    return 0;
}
