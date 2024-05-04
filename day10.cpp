#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    double ans = log(n) / log(2.0);

    if(abs(ans - round(ans)) < 1e-9){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
