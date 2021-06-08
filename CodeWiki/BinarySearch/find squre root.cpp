#include<bits/stdc++.h>
using namespace    std;

#define pb                      push_back

typedef long long int           ll;
typedef double                  dl;

vector<int>arr; //declear the vector globally for easy access;
int Squre_Root(int key)
{
   int l = 0, r = key; // set the range;
   while(l<=r)
   {
      int mid = l+(r-l)/2;              //same as binary search just change the return logice ;
      if(mid*mid == key)return mid;
      if(mid*mid < key) l = mid+1;
      else r = mid-1;
   }
   return -1;
}

int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
   #endif
        int n;
        cin>>n; //vector length and search key;

        if(Squre_Root(n)==-1)cout<<"NOT A Squart Root Number"<<endl;
        else cout<<"Yea This is The Squart Root Number"<<endl;

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}


//Find Squre Root using Binary Search;