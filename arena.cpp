#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int minCount = count(arr, arr + n, *min_element(arr, arr + n));
        cout << n - minCount << endl;
    }
}
