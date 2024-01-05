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

int lengthOfLIS(vector<int>& nums) {
    vector<int>tmp;
    tmp.push_back(nums[0]);

    for(int i=1; i<nums.size(); i++){
        if(nums[i]>tmp.back()) tmp.push_back(nums[i]);
        else{
            int idx = lower_bound(tmp.begin(), tmp.end(), nums[i])-tmp.begin();
            tmp[idx] = nums[i];
        }
    }
    return tmp.size();
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
     
     vector<int>v={
        10,9,2,5,3,7,101,18
     };

    cout<<lengthOfLIS(v)<<endl;


#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}