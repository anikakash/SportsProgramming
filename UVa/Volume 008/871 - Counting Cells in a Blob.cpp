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


vector<string>v;
int cnt=0, n, m;

void dfs(int i, int j){
    
    if(v[i][j]=='1'){
        cnt++;
        v[i][j]='0';
        if(j<n-1)dfs(i,j+1); // right
        if(j>0)dfs(i,j-1);      // left
        if(i>0)dfs(i-1,j);      // upper
        if(i<m-1)dfs(i+1, j);    // Down
        if(i>0 && j>0)dfs(i-1, j-1);        // upper left
        if(i>0 && j<n-1)dfs(i-1, j+1); // upper right
        if(i<m-1 && j>0)dfs(i+1, j-1);      // down left
        if(i<m-1 && j<n-1)dfs(i+1, j+1); // dwon right
    }
    else return;
    
}

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout); 
  #endif

   FASTERIO; //cmt when use scanf & printf ;

   int tt, caseno=0; 
   cin>>tt; 
   flush;
   flush;
   while(tt--){
        string s;
        while(getline(cin,s)){if(s=="")break; v.pb(s);}

        m = v.size(); n = v[0].size();
        //cout<<v.size()<<" "<<n<<endl;
        int  ans=0, ans_count=0;

        for (int i = 0; i < m; i++){
            for(int j=0; j<n; j++){
                dfs(i,j);
                ans = max(cnt,ans);
                cnt=0;
            }
        }
        if(caseno)NL;
        cout<<ans<<endl;
        caseno=1;
        v.clear();
   }
      

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}