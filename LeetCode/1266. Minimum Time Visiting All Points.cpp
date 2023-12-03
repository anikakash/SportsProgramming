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

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
                
    int ans = 0;
    for(int i=0; i<points.size()-1; i++){
        int curx = points[i][0];
        int cury = points[i][1];

        int targetx = points[i+1][0];
        int targety = points[i+1][1];

        ans += max(abs(targetx-curx), abs(targety-cury));
    }

    return ans;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
    
    vector<vector<int>>val {
        {1,1}, 
        {3,4}, 
        {-1,0}
    };
  cout<<minTimeToVisitAllPoints(val)<<endl;

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}