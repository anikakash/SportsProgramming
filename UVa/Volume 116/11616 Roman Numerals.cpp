#include<bits/stdc++.h>
using namespace    std;

#define flush                   cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL                      cout<<'\n';
#define pi                      acos(-1.0) //3.1415926535897932384626
#define pb                      push_back
#define mx                      10000007
#define AC                      int
#define EPS                     1e-10
#define dpoint(x)               fixed<<setprecision(x)
typedef long long int           ll;
typedef double                  dl;
typedef unsigned long long      ul;
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}
int gcd(int a, int b){ int x ; return x = __gcd(a, b);}
int lcm(int a, int b){int y; return y = ((a)*((b)/gcd(a,b)));}

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
        
        string s;
        while(cin>>s){

            if(s[0]>='A' && s[0]<='Z'){
                int ans=0;
                for(int i=0; i<s.size(); i++){

                    if(s[i]=='I'){
                        if(s[i+1]=='V' && i<s.size()-1)ans+=4,i++;
                        else if(s[i+1]=='X' && i<s.size()-1)ans+=9,i++;
                        else ans+=1;
                    }
                    else if(s[i]=='V')ans+=5;

                    else if(s[i]=='X'){
                        if(s[i+1]=='L' && i<s.size()-1)ans+=40,i++;
                        else if(s[i+1]=='C' && i<s.size()-1)ans+=90,i++;
                        else ans+=10;
                        //debugNS("arr",s[i]);
                    }
                    else if(s[i]=='L')ans+=50;

                    else if(s[i]=='C'){
                        if(s[i+1]=='D' && i<s.size()-1)ans+=400,i++;
                        else if(s[i+1]=='M' && i<s.size()-1)ans+=900,i++;
                        else ans+=100;
                    }
                    else if(s[i]=='D')ans+=500;

                    else if(s[i]=='M')ans+=1000;
                    //debugNS("Check",s[0]);
                }
                cout<<ans<<endl;
            }
            else{

                ll n = stoi(s);
                string ans="";

                while(n!=0){
                    if(n>=1000){
                        ans+='M';
                        n-=1000;
                    }
                    else if(n>=900){
                        ans+="CM";
                        n-=900;
                    }
                    else if(n>=500){
                        ans+="D";
                        n-=500;
                    }
                    else if(n>=400){
                        ans+="CD";
                        n-=400;
                    }
                    else if(n>=100){
                        ans+="C";
                        n-=100;
                    }
                    else if(n>=90){
                        ans+="XC";
                        n-=90;
                    }
                    else if(n>=50){
                        ans+="L";
                        n-=50;
                    }
                    else if(n>=40){
                        ans+="XL";
                        n-=40;
                    }
                    else if(n>=10){
                        ans+="X";
                        n-=10;
                    }
                    else if(n>=9){
                        ans+="IX";
                        n-=9;
                    }
                    else if(n>=5){
                        ans+="V";
                        n-=5;
                    }
                    else if(n>=4){
                        ans+="IV";
                        n-=4;
                    }
                    else if(n>=1){
                        ans+="I";
                        n-=1;
                    }
                }
                cout<<ans<<endl;
            }
            s.clear();
        }
       

  #ifdef anikakash
     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
  #endif
   return 0;
}
/*
    1, 4, 5, 9

*/