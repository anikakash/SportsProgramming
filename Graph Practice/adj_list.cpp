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


int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif

    FASTERIO;
       int NumberofNode, NumberofEdge;
       cin>>NumberofNode>>NumberofEdge;

       vector<int>Edge[11];
       vector<int>cost[11];


       for(int i=0; i<NumberofEdge; i++){
            int x,y,c; cin>>x>>y>>c;
            Edge[x].pb(y); cost[x].pb(c);
            Edge[y].pb(x); cost[y].pb(c);
       }
       
        for(int i=1; i<=NumberofNode; i++){
            cout<<i<<" -> ";
            for(int j=0; j<Edge[i].size(); j++){
                cout<<Edge[i][j]<<" ";
            }
            NL;
            cout<<"Cost ";
            for(int j=0; j<cost[i].size(); j++){
                cout<<cost[i][j]<<" ";
            }
            NL;
        }

       int a,b; cin>>a>>b;
       bool flg = false;
       for(int i=0; i<Edge[a].size(); i++){
            if(Edge[a][i]==b){
                cout<<"Coast IS : "<<cost[a][i]<<endl;
                flg = true; break;
            }
       }
       if(!flg)cout<<-1<<endl;

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}