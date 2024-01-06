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

int dp[50001];

int findMaxProfit(vector<vector<int>>&jobs, vector<int>&start,int n, int id){
    if(id==n)return 0;
    if(dp[id]!=-1) return dp[id];

    int nextIdx = lower_bound(start.begin(), start.end(), jobs[id][1])-start.begin();

    int maxProfit = max(findMaxProfit(jobs, start, n, id+1), jobs[id][2]+findMaxProfit(jobs, start, n, nextIdx));

    return dp[id]= maxProfit;
}

int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
    int n = startTime.size();
    vector<vector<int>>jobs;
    memset(dp, -1, sizeof(dp));
    for(int i=0; i<n; i++){
        jobs.push_back({startTime[i], endTime[i], profit[i]});
    }

    sort(jobs.begin(), jobs.end());
   
   for(int i=0; i<n; i++){
     startTime[i] = jobs[i][0];
   }

    return findMaxProfit(jobs, startTime, n, 0);
}

int main() {
#ifdef anikakash
   clock_t tStart = clock();
   freopen("int.txt", "r", stdin);  
   freopen("out.txt", "w", stdout);
#endif
  
    FASTERIO; 
     
     vector<int>s={1,2,3,4,6}, e={3,5,10,6,9}, p={20,20,100,70,60};

    cout<<jobScheduling(s, e, p)<<endl;


#ifdef anikakash
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}