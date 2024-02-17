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

int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int cnt=0;
        
        for(int i=0; i<nums.size(); i++){
                bool f = false;
            for(int k=0; k<pattern.size(); k++){
                
                if(pattern[k]==1 && (i + k + 1<nums.size())){
                    if(nums[i + k + 1] > nums[i + k]){
                        f = true;
                    }
                }
                else if(pattern[k]==0 && (i + k + 1<nums.size())){
                    
                    if(nums[i + k + 1] == nums[i + k])
                        f = true;
                }
                else if(pattern[k]==-1 && (i + k + 1<nums.size())){
                    
                    if(nums[i + k + 1] < nums[i + k])
                        f = true;
                }
                else{
                    f = false;
                    break;
                }
            }
            if(f==true)cnt++;
        }
        return cnt;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
    vector<int> nums = {1,4,4,1,3,5,5,3}, pattern = {1,0,-1};
 cout<<countMatchingSubarrays(nums, pattern)<<endl;

#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
