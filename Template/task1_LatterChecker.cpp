#include<bits/stdc++.h>
using namespace    std;

int main() {
  
   int n; cin>>n;
   while(n--){
      char s; cin>>s;
     if(s >= 48 && s<=57)cout<<s<<" is a Digit"<<endl;
     else if((s>='a' && s<='z') || (s>='A' && s<='Z')){
        if(s == 'a' || s == 'e' || s=='i' || s=='o' || s=='u' || s == 'A' || s == 'E' || s=='I' || s=='O' || s=='U') 
          cout<<s <<" is a Alphabate. It is an Vowel"<<endl;
        else cout<<s <<" is a Alphabate. It is consonant"<<endl;
     }
     else cout<<s<<" is a special Character"<<endl;
   }
    return 0;
}