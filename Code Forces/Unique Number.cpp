#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin)
#define fout         freopen("ans2.txt","w",stdout)


//who cares? I want to give some scary looks to my code... XD//


typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// ------------------------------------Constants-------------------------------------//

#define pi           (acos(-1.0)) //3.1415926535897932384626
#define mx           50006
#define dpoint(x)    fixed<<setprecision(x)

// --------------------------Pre made Functions & Proto Type--------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
void sieve();
bool unique(ll n);

 // --------------------------------------Global--------------------------------------//

vector<int>prime;
bool vis[mx];

 // -------------------------------------slove----------------------------------------//
 //Code Status : ;
int main()
{
   //fin;
   //fout;4
   fasterio;

   ll n, t;
   cin>>t;
   while(t--){
        cin>>n;
           if(n==46)cout<<"-1"<<endl;
               else if(n==47)cout<<"-1"<<endl;
               else if(n==47)cout<<"-1"<<endl;
               else if(n==48)cout<<"-1"<<endl;
               else if(n==49)cout<<"-1"<<endl;
               else if(n==50)cout<<"-1"<<endl;
               else if(n==40)cout<<"1456789"<<endl;
               else if(n==41)cout<<"2456789"<<endl;
               else if(n==42)cout<<"3456789"<<endl;
               else if(n==43)cout<<"13456789"<<endl;
               else if(n==44)cout<<"23456789"<<endl;
               else if(n==45)cout<<"123456789"<<endl;
               else {
                    for(ll i=1; ;i++){
                        if( (digitsum(i)==n) and unique(i)){
                            cout<<i<<endl;
                            break;
                        }
                    }
               }
        }
    return 0;
}

/// ----------------------------Funaction Descriptions----------------------------------//

///sieve;
void sieve() {
    int x=sqrt((int)mx);
    for(int i=3; i<=x; i+=2) {
        if(vis[i]==0) {
            for(int j=i*i; j<mx; j+=2*i)
                vis[j]=1;
        }
    }
    prime.push_back(2);
    for(int i=3; i<mx; i+=2)
        if(vis[i]==0)
            prime.push_back(i);
}
 bool unique(ll n){
     string s = to_string(n);
    bool ans = true;
     for(ll i=0; s[i]; i++){
         for(ll j=i+1; s[j]; j++){
             if(s[i]==s[j]){
                 ans = false;
                 break;
             }
         }
     }
     return ans;
 }
//author anikaksh;
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link:
