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



 // --------------------------------------Global--------------------------------------//


 // -------------------------------------slove----------------------------------------//
 //Code Status :ac ;name: ;
int main()
{
   // #ifndef ONLINE_JUDGE
   //     freopen("n_in.txt","r",stdin);
   //     freopen("n_out.txt","w",stdout);
   // #endif
        
       
        int t;
        cin>>t;
        for(int i=1; i<=t; i++)
        {
          vector<string>main,f;
          main.push_back("http://www.lightoj.com/");

              string value; 
              cout<<"Case "<<i<<":"<<endl;
              while(cin>>value)
              {
                  if(value=="VISIT")
                  {
                    string url;
                      cin>>url;
                      cout<<url<<endl;
                      main.push_back(url);
                      f.clear();
                  }
                  else if(value=="BACK")
                  {
                      if(main.size()<=1)
                        cout<<"Ignored"<<endl;

                      else
                      {
                        f.push_back(main[main.size()-1]);
                        main.pop_back();
                        cout<<main[main.size()-1]<<endl;
                      }
                  }
                  else if(value=="FORWARD")
                  {
                      if(f.size()==0)cout<<"Ignored"<<endl;
                      else
                      {
                        cout<<f[f.size()-1]<<endl;
                        main.push_back(f[f.size()-1]);
                        f.pop_back();
                      }
                  }
                  else break;
                   
              }
        }
    return 0;
}
/// ----------------------------Funaction Descriptions----------------------------------//


//author anikaksh;
//trust me ur the competitor of your own, not ur friend!
//Thanks To My Seniors and frndzz who help me all the time's
//Contest link: