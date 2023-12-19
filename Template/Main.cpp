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

vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
    vector<vector<int>>vs;
        int m = img.size(), n = img[0].size();

    for(int i=0; i<m; i++){
        vector<int>tmp;
        for(int j=0; j<n; j++){

            int sum=0, cnt=0;

            // Bottom 
            if(i+1<m){
                if(j-1>=0){
                    sum+=img[i+1][j-1];
                    cnt++;
                }   
                else if(j+1<n){
                    sum+=img[i+1][j+1];
                    cnt++;
                }
                
                sum+=img[i+1][j];
                cnt++;
            }

            // Top
            if(i-1>=0){
                if(j-1>=0){
                  sum+=img[i-1][j-1];
                  cnt++;
                }
                else if(j+1<n){
                  sum+=img[i-1][j+1];
                  cnt++;
                }

                sum+=img[i-1][j];
                cnt++;
            }

            // previous
            if(j-1>=0){
                sum+=img[i][j-1];
                cnt++;
            }

            // next
            if(j+1<n){
                sum+=img[i][j+1];
                cnt++;
            }

            // this cell;
            sum+=img[i][j];
            cnt++;
            
            tmp.push_back(sum/cnt);
        }
        vs.push_back(tmp);
    }
    return vs;
        
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
    vector<vector<int>>v={
        {100,200,100},
        {200,50,200},
        {100,200,100}
    };

    cout<<destCity(v)<<endl;
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}