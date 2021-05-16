//thanks God For Every Thing!
//contest link:
#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#define pi           (acos(-1.0)) //3.1415926535897932384626
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define fasterio     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define NL           printf("\n")
#define fin          freopen("int.txt","r",stdin);
#define fout         freopen("out.txt","w",stdout);

using namespace std;
typedef long long int ll;
typedef double dl;
typedef unsigned long long ul;

// ----------------------Pre made Functions---------------------------//

template <class T> T gcd(T a, T b){if(a == 0) return b;return gcd(b%a, a);}
template <class T> T lcm(T a, T b){return ((a*b)/gcd(a, b));}



// ----------------------Slove---------------------------//

int main()
{
    //fin
    //fout
    int t, n, num, cnt=0, arr[105];
    scanf("%d %d",&t, &n);
    for(int i=0; i<t; i++)scanf("%d",&arr[i]);

    for(int i=0; i<t; i++){
        if(arr[i]>0){
            //if(arr[i]>=n){
                cnt++;
				if(cnt==n) break;
            //}
        }
    }
	if(arr[n]!=0){
		for(int i=n-1; i<t; i++){
			if(arr[n-1]==arr[i+1]) {
				cnt++;
			}
		} 
	}
	

	cout<<cnt<<endl;

    return 0;
}
//author anikaksh;
