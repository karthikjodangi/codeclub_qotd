#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;

        if(k > n){
            cout << "NO" << endl;
            break;
        }

        long long s1 = (k*(k+1))/2;
        long long s2 = ((n*(n+1))/2) - (((n-k)*(n-k+1))/2);

        if(x <= s2 && x >= s1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }


    }
}