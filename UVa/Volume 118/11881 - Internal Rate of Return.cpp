#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

//----------------------------Global Variable----------------------------------------//


vector<double>arr;

//-----------------------------------Functions--------------------------------------//
double fun(double mid){
   dl sum=arr[0];
   for(int i=1; i<arr.size(); i++)
   {
      sum+=arr[i]/pow((1+mid),i);
   }
   return sum;
}


//------------------------------------MAIN FUNCTION-------------------------------//
int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("in.txt","r",stdin);
        freopen("ot.txt","w",stdout);
   #endif
        int t;
    while(cin>>t && t){
        double l = -0.9,h = 0;

        arr.clear();
        for(int i=0;i<=t;i++){
            double x;
            cin>>x;
            arr.push_back(x);
            h+=abs(x);
        }
       
        while(l+EPS < h){
            double x = l+(h-l)/2;
            double k = fun(x);
            if(k >= 0 && k <= EPS){
                l = x;
                break;
            }
            else if(k > EPS)l = x;
            else if(k < 0)h = x;
        }
        printf("%.2lf\n",l);
    }

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif

    return 0;
}

