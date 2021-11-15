#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void insertion_sort(vector<int>arr){

    for(int i=0; i<arr.size(); i++){
        int sm = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>sm){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1]=sm;
    }
    for(auto it:arr)cout<<it<<" ";
}


int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    FASTERIO;

    int n; cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)cin >> arr[i];
        insertion_sort(arr);

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}