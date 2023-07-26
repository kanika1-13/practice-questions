#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int c;
    cin >> c;
    while (c--) {
        int len;
        cin >> len;
        string str;
        vector<string> arr;
        for (int i = 0; i < 2 * len - 2; i++) {
            cin >> str;
            if (str.size() == len - 1)
                arr.push_back(str);
        }
        reverse(arr[0].begin(), arr[0].end());
        if (arr[0] == arr[1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
