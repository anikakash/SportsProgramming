#include<bits/stdc++.h>
using namespace    std;

#define pb                      push_back

typedef long long int           ll;
typedef double                  dl;

vector<int>arr; //declear the vector globally for easy access;
int upperBound(int key)
{
   int l=0, r = arr.size()-1, ans=-1;
   while(l<=r)
   {
      int mid = l+(r-l)/2;
      if(arr[mid]>key)
      {
         ans = mid;
         r = mid-1;
      }
      else l = mid+1;
   }
   return ans;
}


int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
   #endif
       int n,key;
        cin>>n>>key; //vector length and search key;
        while(n--)
        {
            int x;
            cin>>x;
            arr.pb(x);
        }

        sort(arr.begin(), arr.end()); //B.Search works only on sorted array;
        
        int tmp = upperBound(key);

        if(tmp==-1)cout<<"NOT Found The Value"<<endl;
        else cout<<"Found The lowerBound of "<<key<<" : is "<<tmp<<endl; // 0 base indexing;

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}