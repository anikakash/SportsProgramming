//thanks God For Every Thing!
//contest link: https://www.urionlinejudge.com.br/judge/en/problems/view/1514
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#define pi                      acose(-1)
#define rep(i,x)                for(int i=0; i<(x); i++)
#define rep1(i,x)               for(int i=1; i<=(x); i++)

typedef long long int           ll;
typedef double                  dl;
using namespace std;

bool one_row(int arra[100][100]);
bool all_one(int arra[100][100]);
bool cal_one(int arra[100][100]);
bool cal_zero(int arra[100][100]);

int n, m, i, j;
int arra[100][100];

int main()
{

    int ans=0;

    while(scanf("%d %d", &n, &m)!=EOF)
    {
        int c=0;
        if(n==0 && m==0)
            break;
        else
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    cin>>arra[i][j];
                }
            }

           if(one_row(arra))
                c++;
            if(all_one(arra))
                c++;
            if(cal_one(arra))
                c++;
            if(cal_zero(arra))
                c++;
            cout<<c<<endl;
        }
    }
    return 0;
}
bool one_row(int arra[100][100]) //find at least one 1 in every row;
{
    int cnt=0;
    for(i=0; i<n; i++)
    {
        int l=0;
        for(j=0; j<m; j++)
        {
            if(arra[i][j]!=0)
                l++;
        }
        if(l>0)
            cnt++;
    }
    if(cnt==n)
        return true;
    else
        return false;
}
bool all_one(int arra[100][100]) //check every row has at least one zero;
{
    int cnt=0;
    for(i=0; i<n; i++)
    {
        int l=0;
        for(j=0; j<m; j++)
        {
            if(arra[i][j]!=1)
                l++;
        }
        if(l>0)
            cnt++;
    }
    if(cnt==n)
        return true;
    else
        return false;
}
bool cal_one(int arra[100][100]) //check every cllum has at least one 1;
{
    int cnt=0;
    for(i=0; i<m; i++)
    {
        int l=0;
        for(j=0; j<n; j++)
        {
            if(arra[j][i]!=0)
                l++;
        }
        if(l>0)
            cnt++;
    }
    if(cnt==m)
        return true;
    else
        return false;
}
bool cal_zero(int arra[100][100]) //check every cllum has at least one 0;
{
    int cnt=0;
    for(i=0; i<m; i++)
    {
        int l=0;
        for(j=0; j<n; j++)
        {
            if(arra[j][i]!=1)
                l++;
        }
        if(l>0)
            cnt++;
    }
    if(cnt==m)
        return true;
    else
        return false;
}
//author: ANIKAKSH;
