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
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

// Debugger

#define debugNS(a,b)             cout<<a<<" = "<<b<<endl;
#define debugN(b)               cout<<b<<endl;



int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif
    FASTERIO;
      
      pair<int,string>p;
      p = make_pair(14210, "Anik");

      cout<<p.first<<" "<<p.second<<endl;

      pair<int,string>p1;
      p1 = {14211, "Sourav"};

      cout<<p1.first<<" "<<p1.second<<endl;

      //for coping;

      pair<int,string> &p2 = p1;

      p2.first =  14;
      cout<<p1.first<<endl;
      //cout<<p1.first<<" "<<p1.second<<endl;

      int a[]={1,2,3};
      int b[]={4,5,6};

      pair<int,int> arr[3];

      arr[0]={1,4};
      arr[1]={2,5};
      arr[2]={3,6};

      for(int i=0; i<3; i++)
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    NL;
    //swap 1st and last pair;
    swap(arr[0],arr[2]);
    for(int i=0; i<3; i++)
        cout<<arr[i].first<<" "<<arr[i].second<<endl;

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}
