

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	vector<vector<int>>v;
	int n; cin>>n;
	for(int i=0; i<n; i++){
		vector<int>tmp;
	   for(int j=0; j<n; j++){
			int x; cin>>x;
		    tmp.push_back(x);
		}
		v.push_back(tmp);
	}
	for(int i=0; i<n; i++){
           for(int j=0; j<n; j++){
		  cout<<v[i][j]<<" ";	
		}
		cout<<endl;
	}
	return 0;
}
