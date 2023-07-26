#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        int a;
        int c;
        cin >> a;
        if (a == 1 && a == 2){
            cout << "0" << endl;
        }
        else if (a%2 != 0){
            c = a-1;
            cout << c/2 << endl;
        }
         else if (a%2 == 0){
            c = a-2;
            cout << c/2 << endl;
         }

    }

}