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

#define pi           (acos(-1.0)) //3.1415926535897932384626
#define mx           7500000
#define dpoint(x)    fixed<<setprecision(x)

// --------------------------Pre made Functions & Proto Type--------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd ( b%a, a );}
template <class T> T lcm(T a, T b){return ( ( a/gcd ( a, b ) )*b );}
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}


 // --------------------------------------Global--------------------------------------//


 // -------------------------------------slove----------------------------------------//
 //Code Status :ac ;
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("int.txt","r",stdin);
    //     freopen("ans2.txt","w",stdout);
    // #endif

        fasterio;

      int test;
      vector<int> fist;
      vector<int> secound;
      int n,m,cnt=0,x, y;

      cin>>test;
      while(test--){
          cin>>n>>m;

          for(int i=0; i<n; i++){
            cin>>x;
            fist.push_back(x);
          }
          for(int i=0; i<m; i++){
            cin>>y;
            secound.push_back(y);
          }

          sort(fist.begin(),fist.end());
          sort(secound.begin(), secound.end(), greater<int>());

          int sum1=0, sum2=0, flag=0, sm_ln=0;
          
          if(n>m)sm_ln=m;
          else sm_ln=n;

          for(int i=0; i<n; i++){
              sum1+=fist[i];
          }
          for(int i=0; i<m; i++){
              sum2+=secound[i];
          }
          if(sum1>sum2)
          {
            cout<<"0"<<endl;
          }
          else
          {
              int j=0;
            while(sm_ln>j)
            {
              sum1=0;
              sum2=0;
              swap(fist[j],secound[j]);
              cnt++;

              for(int i=0; i<n; i++){
                sum1+=fist[i];
              }
              for(int i=0; i<m; i++){
                sum2+=secound[i];
              }
              j++;
              if(sum1>sum2)
              {
                cout<<cnt<<endl;
                flag=1;
                break;
              }
            }

            if(flag==0)cout<<"-1"<<endl;
            
        }
          fist.clear();
          secound.clear();
          cnt=0;
      }
    
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//


//author anikaksh;
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link:
