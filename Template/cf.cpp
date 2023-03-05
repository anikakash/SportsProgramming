#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000007 //1e5
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

bool palin(string s)
{
	string k=s;
	reverse(k.begin(),k.end());

	if(k==s) return true;
	else return false;
}

void solve(){
   
   ll n;
   cin>>n;

   ll nn=2*n-2;

   vector<string>v(nn);

   for(int i=0;i<nn;i++)
   {
   	  cin>>v[i];
   }

   for(int i=0;i<nn;i++){

   		string f=v[i];

   		for(int j=i+1;j<nn;j++)
   		{
   			string l=v[j];

   			string ans=f+l;

   			string again=f+l;

   			reverse(again.begin(),again.end());

   			if(ans==again && ans.size()==n)
   			{
   				cout<<"YES\n";

   				cout<<ans<<endl;

   				return;
   			}
   		}
   }


   cout<<"NO\n";


}

int main() {
#ifdef INSANE
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; // comment when use scanf and printf
   
   int tt, caseno=1;
   cin>>tt;
   while(tt--){
      solve();
   }
    
#ifdef INSANE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}