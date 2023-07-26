#include <bits/stdc++.h>
using namespace std;
int main(){
    int a , b , c;
    cin >> a >> b >> c;
    int x;
    if ( a == b){
        x = a*2 + c*2;
    }
    else
        x = 2*c + 2*(min(a,b)) + 1;
}