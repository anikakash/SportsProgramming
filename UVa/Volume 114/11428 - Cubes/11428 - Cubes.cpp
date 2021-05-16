#include<bits/stdc++.h>
using namespace    std;

int main()
{
    #ifndef ONLINE_JUDGE
        clock_t tStart = clock();
        freopen("input.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
        int n;
        while(cin>>n)
        {
          int paise = 0, temp=0;
            if(n==0)return 0;
            int x=0;
            for(int i=1; i<=50 ; i++)
            {
                x=n+i*i*i;
                temp = cbrt(x);
                while(temp*temp*temp < x) temp++;
                if(temp * temp * temp == x)
                {
                    cout<<temp<<" "<<i<<endl;
                    paise = 1;
                    break;
                }
                 paise = 0;
            }
            if(paise == 0)cout<<"No solution"<<endl;
        }
    return 0;
}