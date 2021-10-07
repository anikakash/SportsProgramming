#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                       cout<<'\n';
#define pi                       acos(-1.0) //3.1415926535897932384626
#define pb                       push_back
#define mk                       make_pair
#define mx                       1000005
#define EPS                      1e-10
#define dpoint(x)                fixed<<setprecision(x)
typedef long long int            ll;
typedef double                   dl;
typedef unsigned long long int   ull;

//Funtions
template <class T> T digitsum(T n) {T sum = 0; while (n != 0) {sum += n % 10; n /= 10;} return sum;}
int gcd(int a, int b) { int x ; return x = __gcd(a, b);}
int lcm(int a, int b) {int y; return y = ((a) * ((b) / gcd(a, b)));}


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
#endif

    FASTERIO; //cmt when use scanf & printf ;
   
   int tt,caseno=1; cin>>tt;
   while(tt--){
        int x,y; cin>>x>>y;
        int save[65][65]={0};
        save[x][y]++;
        string s; cin>>s;
        int pos=0, cnt=0; 
        for(int i=0; i<s.size(); i++){
            if(s[i]=='R')pos++;
            else if(s[i]=='L')pos--;
            else{
                pos%=4;
                if(pos==0)y++;
                else if(pos == 2 || pos == -2)y--;
                else if(pos == 1 || pos == -3)x++;
                else if(pos == 3 || pos == -1)x--;
                if(save[x][y]==1)cnt++;
                save[x][y]++;
            }
        }
        cout<<"Case #"<<caseno++<<": "<<x<<" "<<y<<" "<<cnt<<endl;
   }

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}