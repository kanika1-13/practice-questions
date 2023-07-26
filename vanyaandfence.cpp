#include <iostream>
using namespace std;
int main() {
    int n, h, x;
    cin >> n >> h;
    while (cin >> x) {
        if (x > h) {
            n++;
        }
    }
    cout << n << endl;
}
