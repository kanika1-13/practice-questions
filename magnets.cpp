#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int c = 0;
    int g = 0;
    int m;
    while (n--) {
        cin >> m;
        g += c != m;
        c = m;
    }
    cout << g << endl;
}
