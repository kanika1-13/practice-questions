#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool all_same = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                all_same = false;
                break;
            }
        }
        if (n < 2) {
            cout << "1" << endl;
        } else if (all_same) {
            cout << "1" << endl;
        } else {
            bool not_sorted = false;
            for (int i = 0; i < n - 1; i++) {
                if (a[i] > a[i + 1]) {
                    not_sorted = true;
                    break;
                }
            }
            if (not_sorted) {
                cout << "0" << endl;
            } else {
                int diff = a[n - 1] - a[n - 2];
                if (diff % 2 != 0) {
                    int ans = abs(diff) + 1;
                    cout << ans / 2 << endl;
                } else {
                    int ans = abs(diff) + 2;
                    cout << ans / 2 << endl;
                }
            }
        }
    }
}

