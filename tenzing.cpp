#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        int a,b;
        cin >> a;
        cin >> b;
        long long sum = 0;
        long long add = 0;
        for (int i = 0;i < a;i++){
            int x;
            cin >> x;
            sum += x;
        }
         for (int i = 0;i < b;i++){
            int x;
            cin >> x;
            add += x;
    }
        if (sum == add){
            cout << "Draw"<<endl;
        }
        else if (sum > add ){
            cout << "Tsondu" << endl;
        }
        else{
            cout << "Tenzing" << endl;
        }
    }
}