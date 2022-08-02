#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     100005 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

int arr[]={
    1,2,3,4,5,6,7,8,9,19,29,39,49,59,69,79,89,189,289,389,
    489,589,689,789,1789,2789,3789,4789,5789,6789,16789,26789,
    36789,46789,56789,156789,256789,356789,456789,1456789,
    2456789,3456789,13456789,23456789,123456789,3456789,23456789,123456789
};

void solve(){
    int n; cin>>n;
    cout<<arr[n-1]<<endl;


}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);
   freopen("anik.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf 

   int tt;
   cin>>tt; 
   while(tt--)solve();

#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}