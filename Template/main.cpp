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

unordered_set<int> squares; // a set to store the precomputed squares
    int res; // a variable to store the current best result
    
    void pre_cal() {
        // precompute all the squares up to 1e4
        for (int i = 1; i <= 1e4; i++) {
            squares.insert(i * i);
        }
    }
    
    int dfs(int n, int sum) {
        // base case: if n is zero, return the current sum
        if (n == 0) return sum;
        // base case: if n is a perfect square, return 1 plus the current sum
        if (squares.count(n)) return 1+sum;
        // initialize the minimum value as the current best result minus the current sum
        int min = INT_MAX;

        // loop over all the possible squares that are smaller than or equal to n
        for (int i = sqrt(n); i >= 1; i--) {
            // if the current sum plus 1 is already greater than or equal to the current best result, break the loop
            if (sum + 1 >= res) break;
            // otherwise, call dfs on n minus the square, and update the minimum value
            min = std::min(min, dfs(n - i * i, sum + 1));
        }
        // return the minimum value
        return min;
    }
    
    int numSquares(int n) {
        // precompute the squares
        pre_cal();
        // initialize the current best result as n (worst case: all 1s)
        res = n;
        // call dfs on n with zero sum
        res = dfs(n, 0);
        // return the current best result
        return res;
    }

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
     
 cout<<numSquares(61)<<endl;

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
