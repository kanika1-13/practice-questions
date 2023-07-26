#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int count = 0;
        int ans = 0;
        int t;
        cin >> t;
        for (int j = 0; j < t; j++) {
            int a, b;
            cin >> a >> b;
            if (a > 10) {
                continue;
            }
            if (b > count) {
                count = b;
                ans = j + 1;
            }
        }
        cout << ans << endl;
    }
}
