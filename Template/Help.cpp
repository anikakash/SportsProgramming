#include<bits/stdc++.h>
using namespace    std;

int main() {
  #ifdef anikakash
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin>>n;
    vector<int>v(n);
    int min = INT_MAX, mx = 0;
    for(int i=0; i<n; i++){
      cin>>v[i];
      if(v[i]<min)min = v[i];
      if(v[i]>mx)mx = v[i];
    }
    
    cout<<"MAX Element is : "<<mx<<endl;
    cout<<"MIN Element is : "<<min<<endl;
     

    return 0;
}