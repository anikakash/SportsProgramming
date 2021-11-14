#include<bits/stdc++.h>
using namespace    std;

#define pb                      push_back

typedef long long int           ll;
typedef double                  dl;

vector<int>arr; //declear the vector globally for easy access;
int BinarySrc(char key)
{
   int l=0, r = arr.size()-1;
   while(l<=r)
   {
      int mid = l+(r-l)/2;             // over flow chance if use (l+r)/2;
      if(arr[mid]==key) return mid;   // return the key index;
      if(arr[mid]<key) l = mid+1;    //update the left range cause our search value up to arr[mid]
      else r = mid-1;               //update the right range cause our search value down to arr[mid]
   }
     return -1;                   //when we don't find our value in array;
}

int main()
{
   #ifdef anikakash
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
   #endif
        char key;
        string arr = "aaaadhikknss";
        cin>>key; //vector length and search key;
        
        int tmp = BinarySrc(key);
        cout<<tmp<<endl;

        if(tmp==-1)cout<<"NOT Found The Value"<<endl;
        else cout<<"Found The Value And The Index Is : "<<tmp<<endl; // 0 base indexing;

   #ifdef anikakash
      fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
   #endif
    return 0;
}