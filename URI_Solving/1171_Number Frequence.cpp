//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#define pi                      acose(-1)
#define rep(i,x)                for(int i=0; i<(x); i++)
#define rep1(i,x)               for(int i=1; i<=(x); i++)

typedef long long int           ll;
typedef double                  dl;
using namespace std;

const int MX= 2005;


void bobule_sort(int list[], int n);

int main()
{
    int n;

    int  i, j, c=0;
    cin>>n;
    int arr[n], arr2[n];
    rep(i,n)
    {
        cin>>arr[i];
    }
    bobule_sort(arr, n);
    for(i=0; i<n; i++)
    {
        c=1;
        if(arr[i]!=-1)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                    arr[j]=-1;
                }
            }
            arr2[i]=c;
        }
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]!=-1)
        {
            printf("%d aparece %d vez(es)\n", arr[i], arr2[i]);
        }
    }

    return 0;
}
void bobule_sort(int list[], int n)
{
    int i, j, temp, cnt=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(list[j]>list[j+1])
            {
                temp      = list[j];
                list[j]   = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}
