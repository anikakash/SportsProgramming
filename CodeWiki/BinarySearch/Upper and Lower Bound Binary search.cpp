#include<bits/stdc++.h>
using namespace    std;

#define pb                      push_back

typedef long long int           ll;
typedef double                  dl;

vector<int>arr; //declear the vector globally for easy access;
ll upperBound(ll key)
{
   ll l=0, r = arr.size()-1, ans=arr.size();  
   while(l<=r)
   {
      ll mid = l+(r-l)/2;
      if(arr[mid]>key)
      {
         ans = mid;
         r = mid-1;
      }
      else l = mid+1;
   }
   return ans;
}
/*
   return the next index of key 
   OR, if it is not in array then retrun -1 or size;
*/
ll lowerBound(ll key)
{
   ll l=0, r = arr.size()-1, ans=arr.size();
   while(l<=r)
   {
      ll mid = l+(r-l)/2;
      if(arr[mid]>=key)
      {
         ans = mid;
         r = mid-1;
      }
      else l = mid+1;
   }
   return ans;
}
/*
return the kay index if it is aviable there. 
OR, if the the key is not present then return the next big number index;
OR, if the key is of out array the return -1 or the size of arry cause every thing is between the key.
the stl lowerBound also work like this;
*/

int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
   #endif
       

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}