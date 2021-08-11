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

vector<string>v;
int cnt=0, r,c;

void dfs(int i, int j, char c){
    
    if(v[i][j]==c){
        v[i][j]='0';
        if(j<c-1)dfs(i,j+1,c); // right
        if(j>0)dfs(i,j-1,c);      // left
        if(i>0)dfs(i-1,j,c);      // upper
        if(i<r-1)dfs(i+1, j,c);    // Down
    }
    else return;
    
}
 bool cmp(pair<int,char>a, pair<int,char>b){
    if(a.first!=b.first) return a>b;
    return a<b;
 }


int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout); 
  #endif

   FASTERIO; //cmt when use scanf & printf ;

   
      int tt; cin>>tt;
      for(int caseno=1; caseno<=tt; caseno++){
            r=0; c=0;
            cin>>r>>c;
            flush; 
            for (int i = 0; i < r; i++){
                string s; cin>>s;
                v.pb(s);
            }

            vector<pair<int,char>>pp;
            vector<char>tmp(26,0);

            for (int i = 0; i<r; i++){
                for(int j = 0; j<c; j++){
                    if(v[i][j]!='0'){
                        char c = v[i][j];
                        tmp[c-'a']++;
                        dfs(i,j,c);
                    }
                }
            }

            for(int i=0; i<26; i++) if(tmp[i]>0)pp.pb(mk(tmp[i],i+'a'));


            sort(pp.begin(), pp.end(), cmp);
            cout<<"World #"<<caseno<<endl;
            for(auto i=0; i<pp.size(); i++){
                cout<<pp[i].second<<": "<<pp[i].first<<endl;
            }
           v.clear();
        }


  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif

   return 0;
}