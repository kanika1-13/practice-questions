#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float a, b;
    cin >> a >> b;
    cout << fixed << setprecision(6) << a / b << endl;
    return 0;
}
