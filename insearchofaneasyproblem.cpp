#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin >> n;
 int t=0, c=0;
 int arr[n];
 for(int i=0; i<n; ++i){
    cin >> arr[i];
    if(arr[i]==0){
        t++;
    }
    else{
        c++;
    }
 }
 if(c==0){
    cout << "EASY\n";
 }
 else{
    cout << "HARD\n";
 }
}


