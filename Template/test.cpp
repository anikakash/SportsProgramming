#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb                       push_back

typedef long long int            ll;
const int sz = 1e5+10;
int arr[sz];
int sum[sz];
void prefix_sum(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        sum[i] = sum[i-1]+arr[i];
    }

    int q; cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }

}

int main() {
    #ifdef anikakash
    // clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;
    prefix_sum();
    return 0;
}