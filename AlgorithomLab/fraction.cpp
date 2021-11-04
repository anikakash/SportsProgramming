#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int val[n + 7], price[n];

    float tk[n + 7], arr[n + 7];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &val[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &price[i]);
    }
    for (int i = 0; i < n; i++) {
        tk[i] = (float)price[i] / val[i];
        arr[i] = tk[i];
    }
    sort(arr, arr + n);

    int w; scanf("%d", &w);

    /*
    5
    12 1 4 1 2
    4 2 10 1 2
    15
    */


    float sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == tk[j] && val[j] <= w && w > 0) {
                sum += price[j];
                w -= val[j];
                tk[j] = -1;
            }
            else if (arr[i] == tk[j] && val[j] >= w && w != 0) {
                sum += w * arr[i];
                w = 0;
            }
        }
    }

    printf("%f\n", sum);

    return 0;
}