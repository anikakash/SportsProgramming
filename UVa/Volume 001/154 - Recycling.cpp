#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define MaxN                     1000000
#define EPS                      1e-18
#define dpoint(x)                fixed<<setprecision(x)
#define Fill(ar, weight)         memset(ar, weight, sizeof(ar))
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

//Funtions
template <class T> T digitsum(T n) {T sum = 0; while (n != 0) {sum += n % 10; n /= 10;} return sum;}
template <class T> T gcd(T a, T b) { T x ; return x = __gcd(a, b);}
template <class T> T lcm(T a, T b) {T y; return y = ((a) * (b)) / gcd(a, b);}

// Debugger
#define gobug                   0
#define debugNS(a,b,c)          cout<<a<<b<<c<<endl;
#define debugN(b)               cout<<b<<endl;

int ROW[] = { +0, +0, -1, +1};
int COL[] = { +1, -1, +0, +0};

int X[] = { +0, +0, +1, -1, -1, +1, -1, +1}; // Kings Move
int Y[] = { -1, +1, +0, +0, +1, +1, -1, -1}; // Kings Move

int KX[] = { -2, -2, -1, -1,  1,  1,  2,  2}; // Knights Move
int KY[] = { -1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move

int masking(char c){
 
    if(c == 'r')return 0;
    if(c == 'o')return 1;
    if(c == 'y')return 2;
    if(c == 'g')return 3;
    if(c == 'b')return 4;
    return -1;
}

int main() {

#ifdef HOME
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

  string s; 
  int list [110][5];
  int n=0;
  while(cin>>s && s[0]!='#'){
        if(s[0]=='e'){
            // for(int i=0; i<n; i++){
            //     for(int j=0; j<5; j++)
            //         cout<<(char)list[i][j]<<" ";
            //     cout<<endl;
            // }
            // cout<<endl;
            
             int sum=0, ans=0, pos=0;
           for(int k=0; k<n; k++){
                map<char ,int >mp;
                 for(int i=0; i<5; i++){
                     char cc = list[k][i];
                     for(int j=0; j<n; j++){
                        if(list[j][i]==cc)
                         mp[cc]++;
                     }
                 }
                 sum=0;
                 for(auto it:mp){
                    // cout<<it.first<<" "<<it.second<<endl;
                    sum+=it.second;
                 }
                 // cout<<"First one Total sum : "<<sum<<endl;
                    // cout<<endl;
                 if(sum>ans){
                    ans = sum;
                    pos = k+1;
                 }
           }
           cout<<pos<<endl;
           list [110][5]={0};
           n=0;
        }
        else{
            for(int i=0; i<5; i++){
                list[n][masking(s[i*4])] = s[i*4+2];
            }
            n++;
        }
  }


#ifdef HOME
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}