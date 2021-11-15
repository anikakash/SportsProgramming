#include<bits/stdc++.h>
using namespace    std;

#define flush                    cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define FASTERIO                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


void selection_sort(vector<int>arr) {

    int sm = 0;
    for (int i = 0; i < arr.size(); i++) {
        sm = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[sm] > arr[j])sm = j;
        }
        swap(arr[i], arr[sm]);
    }
    for (auto it : arr)cout << it << " ";
}

int main() {

#ifdef anikakash
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n; cin >> n;
    vector<int>arr(n);
    int sm = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    selection_sort(arr);

#ifdef anikakash
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}