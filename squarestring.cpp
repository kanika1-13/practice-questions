#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        bool isSquare = false;
        if (n % 2 == 0 && s.substr(0, n / 2) == s.substr(n / 2))
            isSquare = true;
        if (isSquare)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
