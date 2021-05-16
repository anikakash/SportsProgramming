//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#define pi                      acose(-1)

typedef long long int           ll;
typedef double                  dl;
using namespace std;
const int mx = 1e4+5;


int main()
{
    int n, i;


    while(cin>>n && n!=0)
    {
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int cnt=0;
        for(i=1; i<n-1; i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1] || arr[i]<arr[i-1] && arr[i]<arr[i+1])
            {
                cnt++;
            }
        }
        if(arr[0]>arr[n-1] && arr[0]>arr[1] || arr[0]<arr[n-1] && arr[0]<arr[1])
        {
            cnt++;
        }
        if(arr[n-1]>arr[n-2] && arr[n-1]>arr[0] || arr[n-1]<arr[n-2] && arr[n-1]<arr[0])
        {
            cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}
