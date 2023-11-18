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

int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());

    int n = nums.size();
    int maxFreq = 0;
    int left = 0;
    long long sum = 0;

    for (int right = 0; right < n; ++right) {
        sum += nums[right];

        while ((long long)nums[right] * (right - left + 1) > sum + k) {
            sum -= nums[left];
            left++;
        }

        maxFreq = max(maxFreq, right - left + 1);
    }

    return maxFreq;
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
   vector<int>nums={1,2,4}; int k=5;
    int val = maxFrequency(nums, k);
    cout<<val<<endl;
   
    
#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}