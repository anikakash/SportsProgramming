#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	while(n--){
	    int sz; cin>>sz;
	    std::vector<int>arr(sz) ;
	    int one=0, zero=0;
	   for(int i=0; i<sz; i++){
	       cin>>arr[i];
	       if(arr[i]==1)one++;
	       if(arr[i]==0)zero++;
	   }
	   cout<<(long long int)(pow(2,zero)*one)<<endl;
	}
	return 0;
}