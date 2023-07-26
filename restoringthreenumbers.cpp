#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c,d;
    int k,l,m,n;
    cin >> a>>b>>c>>d;
    int values[] = {a, b, c, d};
    int size = 4;
    sort(values, values + size, greater<int>());
    k = values[0];
    l = values[1];
    m = values[2];
    n = values[3];
    cout << values[0]-values[1] <<endl;;
    cout << values[0]-values[2] << endl;
    cout << values[0]-values[3] << endl;
}