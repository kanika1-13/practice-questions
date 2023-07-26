#include <bits/stdc++.h>
using namespace std;
int main (){
        long long a , b;
        cin >> a >> b;
        a = (a+1)/2;
        long long  r;
        if (b>a){
            r = 2*(b-a);
        }
        else{
            r = 2*b-1;
        }
    cout << r;

}