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


int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif

    FASTERIO;
        int MatrixSize,caseno = 0;
        while(cin>>MatrixSize){
            if(!MatrixSize)break;

            caseno++;
            int Matrix[11][11]; bool mark[11][11];

            for(int i=0; i<MatrixSize; i++){
                for(int j=0; j<MatrixSize; j++){
                    cin>>Matrix[i][j];
                    mark[i][j] = true;
                }
            }

            int left = 0, right = MatrixSize-1, sum=0;
            vector<int>ans;
            while(left<=right){
                for(int i=0; i<MatrixSize; i++){
                    for(int j=0; j<MatrixSize; j++){
                        if((i == left || i == right || j == right || j == left)&&(mark[i][j] == true)){
                            sum+=Matrix[i][j];
                            mark[i][j]=false;
                        }
                    }
                }
                ans.pb(sum); sum = 0; left++; right--;
            }
            cout<<"Case "<<caseno<<": ";
            for(int i=0; i<ans.size(); i++){
                if(i==ans.size()-1)cout<<ans[i]<<endl;
                else cout<<ans[i]<<" ";
            }
        }

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}
/*
   


*/