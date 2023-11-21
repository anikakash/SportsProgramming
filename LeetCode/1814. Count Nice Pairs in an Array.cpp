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

int countNicePairs(vector<int>& nums) {
        
        vector<int>ans;
        unordered_map<int, int> dic;

    for(int i=0; i<nums.size(); i++){
        int val = nums[i];
        int rem=0, rev=0;
        while(val){
            rem = val%10;
            rev = rev*10 + rem;
            val/=10;
        }
        ans.push_back(nums[i]-rev);
        // dic[nums[i]-rev]++;
    }

   
    int MOD = 1e9 + 7;
    int res=0;

    for(int it:ans){
        res = (res+dic[it])%MOD;
        dic[it]++;
    }

    return res;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
   
   vector<int> num= {13,10,35,24,76};
   
   cout<<countNicePairs(num)<<endl;
    
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}