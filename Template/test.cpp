#include<bits/stdc++.h>
using namespace    std;


int main(){

   long long int t; 
   cin>>t;
    vector<long long int>v;
  for(int i=0; i<t; i++){
    long long int x; 
    cin>>x;
    v.push_back(x);
  }
    sort(v.begin(), v.end());

    long long int n; cin>>n;
    auto it = lower_bound(v.begin(), v.end(),n);

    vector<long long int>::iterator tmp1, tmp2;
    tmp1=it;
    tmp1 = tmp1-1;
    if(*it == n)cout<<-1<<endl;
    else if(*it == 0)cout<<v[t-1]<<endl;
    else{
        int x = n-(*tmp1);
        int y = (*it)-n;
        if(x>y)cout<<*it<<endl;
        else if(x==y)cout<<*it<<endl;
        else cout<<*tmp1<<endl;
    }

   return 0;
}