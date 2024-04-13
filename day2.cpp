#include <bits/stdc++.h>
using namespace std;

int convertTodecimal(int n){
    int res = 0;
    int count = -1;
    while(n>0){
        if(n%2 == 1){
            count++;
            res += pow(2,count);
        }
        n /= 2;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << convertTodecimal(n) << "\n";
    }
}