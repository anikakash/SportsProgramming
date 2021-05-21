//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)
#define max                     170000
typedef long long int           ll;
typedef double                  dl;
using namespace std;
long long int digit_checker( ll sum);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin>>str;
    ll sum=0, cnt=0;
    int ln = str.size();

    if(ln==1){
        cout<<"0"<<endl;
        return 0;
    }

    for(int i=0; i<ln; i++){
        sum+=str[i]-'0'; // ascii value; 1 = 49; 0=48; string using char ;
        //so, This line convert char to int ;str[i]-'0';
    }
    while(sum>9){
        sum = digit_checker(sum);
        cnt++;
    }
    cout<<cnt+1<<endl;

}
long long int digit_checker( ll sum)
{
    ll ans =0;
    while(sum>0){
        ans+=sum%10;
        sum/=10;
    }
    return ans;
}
