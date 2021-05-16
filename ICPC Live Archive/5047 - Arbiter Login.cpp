//             _   _                
//   __ _ _   _| |_| |__   ___  _ __ 
//  / _` | | | | __| '_ \ / _ \| '__|
// | (_| | |_| | |_| | | | (_) | |   
//  \__,_|\__,_|\__|_| |_|\___/|_|   
//              _ _            _             _     
//   __ _ _ __ (_) | __   __ _| | ____ _ ___| |__  
//  / _` | '_ \| | |/ /  / _` | |/ / _` / __| '_ \ 
// | (_| | | | | |   <  | (_| |   < (_| \__ \ | | |
//  \__,_|_| |_|_|_|\_\  \__,_|_|\_\__,_|___/_| |_|


//unsolve problem link: https://vjudge.net/problem/UVALive-5047

#include<bits/stdc++.h>
using namespace    std;

#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define NL           cout<<endl;
#define pi           acos(-1.0) //3.1415926535897932384626
#define dpoint(x)    fixed<<setprecision(x)
#define debug(x)     cout<<x<<endl;
#define gcd(a,b)     __gcd(a,b);
#define lcm(x,y)     (a * (b / gcd(a, b)));
#define pb           push_back
#define mx          100000005

typedef long long int       ll;
typedef double              dl;
typedef unsigned long long  ul;

// --------------------------Pre made Functions & Proto Type--------------------------//
template <class T> T digitsum(T n){T sum=0;while(n!=0){sum+=n%10;n/=10;}return sum;}

string pas, in;


int main()
{
    #ifdef EXTRA_8
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
        int t;
        cin>>t;
        flush;
        for(int k=1; k<=t; k++)
        {
            cin>>pas>>in;
           
            int pas_len = pas.size();
            
            string caps_lock, num_lock, both;

           for(int i=0; i<pas_len; i++)
           {
                if(pas[i]>='A' && pas[i]<='Z')
                {
                    caps_lock += tolower(pas[i]);
                    both += tolower(pas[i]);
                    num_lock+=pas[i];
                }   
                else if(pas[i]>='a' && pas[i]<='z')
                {
                    caps_lock += toupper(pas[i]);
                    both += toupper(pas[i]);
                    num_lock+=pas[i];
                }
                else caps_lock+=pas[i];
           }
             cout<<"Case "<<k<<": ";
           if(pas == in) cout<<"Login successful."<<endl;
           else if(caps_lock == in)cout<<"Wrong password. Please, check your caps lock key."<<endl;
           else if(num_lock == in)cout<<"Wrong password. Please, check your num lock key."<<endl;
           else if(both == in)cout<<"Wrong password. Please, check your caps lock and num lock keys."<<endl;
           else cout<<"Wrong password."<<endl;
        }
       
    #ifdef EXTRA_8
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}




//  _____            _   _            _                      ___   __ 
// |  ___|__  _ __  | |_| |__   ___  | |    _____   _____   / _ \ / _|
// | |_ / _ \| '__| | __| '_ \ / _ \ | |   / _ \ \ / / _ \ | | | | |_ 
// |  _| (_) | |    | |_| | | |  __/ | |__| (_) \ V /  __/ | |_| |  _|
// |_|  \___/|_|     \__|_| |_|\___| |_____\___/ \_/ \___|  \___/|_|                                                                    
//   ____ ____  
//  / ___|  _ \ 
// | |   | |_) |
// | |___|  __/ 
//  \____|_|    
//            
