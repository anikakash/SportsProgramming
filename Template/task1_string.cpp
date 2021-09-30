#include<bits/stdc++.h>
using namespace    std;

int main() {

    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
      int x = s[i]; x++;
      cout<<char(x);
    }
    
    return 0;
}