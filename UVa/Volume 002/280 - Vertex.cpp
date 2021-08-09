#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define AC                      int
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

int dx[] = {0, 0, -1, 1, -1, -1, 1, 1}; //Graph Move;
int dy[] = {1, -1, 0, 0, -1, 1, -1, 1};


vector<int>v[101];
bool vis[101];
int n;
void dfs(int a){
    for(int i=0; i<v[a].size(); i++){
        int x = v[a][i];
        if(!vis[x]){
            vis[x]=true;
            dfs(x);
        }
    }
}

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout); 
  #endif

   FASTERIO; //cmt when use scanf & printf ;

   while(cin>>n && n!=0){
        for(int i=1; i<=n; i++) v[i].clear();
        
        int node;
        while(cin>>node && node!=0){
            int vertx;
            while(cin>>vertx && vertx!=0)
                v[node].pb(vertx);
        }
        
        int tt; cin>>tt;
        while(tt--){
            int x, cnt=0; cin>>x;
            memset(vis,false,sizeof(vis));
            dfs(x);
            for(int i=1; i<=n; i++)if(!vis[i])cnt++;
            cout<<cnt;
            for(int i=1; i<=n; i++)if(!vis[i])cout<<" "<<i;
                NL;
        }
   }
      

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}








