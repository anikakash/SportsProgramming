#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void insertion_sort(vector<int>arr) {

    for (int i = 0; i < arr.size(); i++) {
        int sm = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > sm) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = sm;
    }
    for (auto it : arr)cout << it << " ";
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
    std::map<int, int> mp;
    for (int i = 0; i < n; i++) {cin >> arr[i]; mp[arr[i]]++;}
    sort(arr.begin(), arr.end());
    // for (auto it : arr)cout << it << " "; cout << endl;

    cout << arr[n - 1] << " ";
    for (int i = n - 2; i >= 0; i--) {
        if (mp[arr[i]] == 2) {
            cout << arr[i]; return 0;
        }
        else if (arr[n - 1] % arr[i]) {
            cout << arr[i]; return 0;
        }
    }


#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}