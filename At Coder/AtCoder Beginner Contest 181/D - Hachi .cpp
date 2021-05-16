//thanks God For Every Thing!
//contest link:
 
#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
 
#define pi           acose(-1)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin);
#define fout         freopen("out.txt","w",stdout);
 
 
using namespace std;
 
typedef long long int ll;
typedef double dl;
 
// ---------------------- slove---------------------------//
 
 
 
 
int main()
{
    //fin
    //fout
    string s;
    getline(cin,s);
    ll ln=0;
    ln = s.length();
 
    int x1=0, x2=0, x3=0, chekr1=0, chekr2=0;
 
    int flg1=0, flg2=0, flg3=0, x=0;
 
    if(ln==1)
    {
        if(s[0] == '8')
        {
            printf("Yes");
            NL;
        }
        else
        {
            printf("No");
            NL;
        }
        return 0;
    }
    else if(ln==2)
    {
        x1 = s[ln-1]-48;
        x2 = s[ln-2]-48;
 
        chekr2 = ((x2*10)+x1);
        chekr1 = ((x1*10)+x2);
 
        if(chekr1%8==0 || chekr2%8==0)
        {
            printf("Yes");
            NL;
        }
        else
        {
            printf("No");
            NL;
        }
        return 0;
    }
 
    else if(ln>=3)
    {
        int arr[10]={0};
        for(int c=0; c<ln; c++)
        {
            arr[s[c]-48]++;
        }
        for(int i=104; i<=992; i+=8)
        {
            int d1, d2, d3, n;
            n = i;
            d1 = n%10;
            n/=10;
            d2 = n%10;
            d3 = n/10;
            if(arr[d1]>0)
            {
                arr[d1]--;
                if(arr[d2]>0)
                {
                    arr[d2]--;
                    if(arr[d3]>0)
                    {
                            printf("Yes");
                            NL;
                            return 0;
                    }
                    arr[d2]++;
                }
                arr[d1]++;
            }
 
        }
        printf("No");
        NL;
        return 0;
    }
}