#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mk                      make_pair
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

string DecimalToBinary(int n){

    string res="";
    for(int i=31; i>=0; i--){
        int k = n & (1<<i);
        res += (n&k)?'1':'0';
    }
    return res;
}
int BinaryToDecimal(string s){
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        ans = (2*ans)+s[i]-'0';
    }
    return ans;
}

int cnt=0, r,c;

 bool cmp(pair<int,char>a, pair<int,char>b){
    if(a.first!=b.first) return a>b;
    return a<b;
 }

vector<int>adj[26];
bool vis[26];

void dfs(int i){
    if(vis[i])return;
    vis[i]=true;
    for(auto j:adj[i]) if(!vis[j])dfs(j);
}

int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout); 
  #endif

   FASTERIO; //cmt when use scanf & printf ;

   
     int tt; cin>>tt;
     string c,s;
     for(int i=0; i<tt; i++){
            cin>>c;
            int node = c[0]-65;
            getline(cin,s);
            while(getline(cin,s)){
                if(s.size()==0)break;
                adj[s[0]-65].pb(s[1]-65);
                adj[s[1]-65].pb(s[0]-65);
            }
            
            memset(vis,false,sizeof vis);

            for(int i=0; i<=node; i++){
                if(!vis[i]){
                    cnt++; dfs(i);
                }
            }
            cout<<cnt<<endl;
            cnt=0;
            if(i<tt-1)cout<<endl;
            for(int i=0; i<=node; i++) adj[i].clear();
     }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}