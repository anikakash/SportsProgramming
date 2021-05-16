#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin)
#define fout         freopen("ans.txt","w",stdout)


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
   //fout;
   fasterio;
   int t,j;
   string s1, s2;
   
   while(cin>>t){
       for(int i=1; i<=t; i++){
           cin>>s1>>s2;
      int ln1=0, ln2=0;
      ln1=s1.size();
      ln2=s2.size();
     
      if(ln1!=ln2){
          cout<<"No"<<endl;
      }
      else
      {
            for(j=0;j<ln1;j++)
            {
                if((s1[j]=='a'||s1[j]=='e'||s1[j]=='i'||s1[j]=='o'||s1[j]=='u') && (s2[j]=='a'||s2[j]=='e'||s2[j]=='i'||s2[j]=='o'||s2[j]=='u'))
                {
                    continue;
                }
                else if(s1[j]==s2[j])
                {
                    continue;
                }
                else
                    break;
            }
            if(ln1==j) cout<<"Yes"<<endl;
            else cout<<"No"<<endl; 
       }

    }
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