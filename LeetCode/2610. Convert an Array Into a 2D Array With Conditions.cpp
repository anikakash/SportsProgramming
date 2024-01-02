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

vector<vector<int>> findMatrix(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(auto it: nums)cout<<it<<" ";NL;

        vector<vector<int>>ans;

    int fcnt=0, n = nums.size();
    while(fcnt<nums){
        unorder_map<int,int>m;
        vector<int>v;
        for(int i=0; i<n; i++){
            if(!m[nums[i]] && nums[i]!=-1){
                fcnt++;
                m[nums[i]]++;
                v.push_back(nums[i]);
                nums[i]=-1;
            }
        }
        ans.push_back(v);
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
     
     vector<int>v={1,3,4,1,2,3,1};

    vector<vector<int>> v = findMatrix(v);

    for()


#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}