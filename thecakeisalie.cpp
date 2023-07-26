#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while(t--){
        int n , m ,k;
        cin >> n>>k>>m;
        if (n*k - 1 == m)
            cout << "yes" << endl;
        else 
            cout << "no" << endl;  
    }
}
