#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long long A, ans=1;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> A;
        if(A==0){ans=0;
            break;
        }
        if(A>1000000000000000000/ans)ans=-1;
        if(ans!=-1)ans*=A;
    }
    cout <<ans;
    return 0;
}
