#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long num;
        cin >> num;

        if((num & (num - 1)) == 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}