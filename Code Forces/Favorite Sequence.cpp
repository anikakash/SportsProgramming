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
template <class T> T Digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
void sieve();

 // --------------------------------------Global--------------------------------------//

vector<int>prime;
bool vis[mx];

 // -------------------------------------slove----------------------------------------//
 //Code Status : Sub Task Pass;
int main()
{
   //fin;
  // fout;
   fasterio;
   
   int t;
   cin>>t;
   while (t--)
   {
       vector<int>x;
       vector<int>y;
       int n, c;
       cin>>c;
       for(int i=0; i<c; i++){
           cin>>n;
           x.push_back(n);
       }

       for(int i=0; i<c; i++){
           y.push_back(x[i]);
           for(int j=x.size()-1-i; ;){
               y.push_back(x[j]);
               break;
           }
       }
       for(int i=0; i<c; i++){
           cout<<y[i]<<" ";
       }

        cout<<endl;

        x.clear();
        y.clear();
   }
   
  
    return 0;
}

// ----------------------------Funaction Descriptions----------------------------------//

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
//author anikaksh; 
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link: 