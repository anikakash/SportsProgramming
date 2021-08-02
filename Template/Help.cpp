#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;

// Debugger
#define debugNS(a,b)             cout<<a<<" = "<<b<<endl;
#define debugN(b)               cout<<b<<endl;



int main(){
   
  #ifdef anikakash
       clock_t tStart = clock();
       freopen("INPUT.txt","r",stdin);
       freopen("OUTPUT.txt","w",stdout);
  #endif
    FASTERIO;
    
    int t;cin>>t; 
        while(t--){
            int n;cin>>n;
            string s1, s2;
            cin>>s1;
            cin>>s2; 
            int cnt=0; 
            for(int i=0; i<n; i++){
                    if(s1[i]=='0'){
                        if(s2[i]=='1')cnt++;
                    }
                    else if(s1[i]=='1'){
                       if(s2[i]=='1'){
                            if(s2[i+1]=='1' && i<n-1){
                                cnt++;
                                s2[i+1]='x';
                               // debugNS(i,cnt);
                            }
                       }
                       else if(s2[i]=='0'){
                            if(s2[i+1]=='1' && i<n-1){
                                cnt++;
                                s2[i+1]='x';
                                //debugNS(i,cnt);
                            }
                            if(s2[i-1]=='1' && i>0){
                                cnt++;
                                s2[i-1]='x';
                                //debugNS(i,cnt);
                            }
                       }
                       else if(s2[i-1]=='1' && i>0){
                                cnt++;
                                s2[i-1]='x';
                               // debugNS(i,cnt);
                            }
                    }
                    //cout<<i<<" = "<<s1[i]<<" "<<s2[i]<<endl;
                    //cout<<cnt<<endl;
            }
            cout<<cnt<<endl;
        }
        
  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}