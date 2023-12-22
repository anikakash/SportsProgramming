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

int maxScore(string s) {
    int ans = 0;

    for(int i=0; i<s.size()-1; i++){
        int cnt=0;
        for(int j=0; j<=i; j++)
            if(s[j]=='0')cnt++;
        for(int j=i+1; j<s.size(); j++)
            if(s[j]=='1')cnt++;
        ans = max(ans, cnt);
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
    // vector<vector<int>>v={
    //     {8,7},
    //     {9,9},
    //     {7,4},
    //     {9,7}
    // };


    string s = "1111";

    cout<<maxScore(s)<<endl;
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}