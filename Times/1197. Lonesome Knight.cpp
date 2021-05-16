#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           printf("\n")



//who cares? I want to give some scary looks to my code... XD//


typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// ------------------------------------Constants-------------------------------------//

#define pi           acos(-1.0) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)
#define mod          1000000007
#define pb           push_back
#define scn(x)       scanf("%d",&x)
#define scnd(x)      scanf("%lf",&x)
        

// --------------------------Pre made Functions & Proto Type--------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

void print(int n, int c){
  if(c==n+1) return;
  print(n,c+1);
  cout<<c<<" ";

}


 // --------------------------------------Global--------------------------------------//


 // -------------------------------------slove----------------------------------------//
 //Code Status :ac ;name: Unlucky Bird;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("int.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
        int t;
        cin>>t;
        while(t--){
            string s;
          cin>>s;
          int r = s[0]-'a';
          int c = s[1]-'1';
          int row[]={2,2,-2,-2,1,1,-1,-1};
          int col[]={1,-1,1,-1,2,-2,2,-2};
          int cnt = 0;
          for(int i=0; i<8; i++){
              int row1 = r+row[i], col1 = c+col[i];
              if(row1>=0&&row1<=7 && col1>=0&&col1<=7) cnt++;
          }
          cout<<cnt<<endl;
          s.clear();
        }
          
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//


//author anikaksh;
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link:https://lightoj.com/problem/1311?problem=1311
