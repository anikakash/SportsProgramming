#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<endl;
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
#define debug1(a)               cout<<" "<<a<<" = ";
#define debug2(b)               cout<<b<<endl;
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}


int main(){
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("output.txt","w",stdout);
   #endif
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
        
   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
   return 0;
}