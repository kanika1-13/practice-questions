#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count = 0;
    while (n--) {
        int p, q;
        cin >> p >> q;
        if (p + 2 <= q) {
            count++;
        }
    }
    cout << count << endl;
}
