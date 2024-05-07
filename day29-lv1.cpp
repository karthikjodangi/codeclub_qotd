#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if(m > n){
            m = m+n;
            n = m-n;
            m = m-n;
        }
        if(n==1 && m==1){
            cout << 0 << endl;
        }else if(m==1){
            cout << n << endl;
        }else{
            int a,b,c;
            a = m/2;
            b = n-1;
            c = a;
            if(m%2 == 0){
                c = a-1;
            }
            int res = (2*(a+b+c)) - b + 1;
            cout << res << endl;
        }
    }
}
// 7
// 7 5
// 5 7
// 1 1
// 100000 100000
// 57 228
// 1 5
// 5 1
