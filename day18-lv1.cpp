#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        long long int n,res;
        cin >> n;
        if(n < 7){
            res = 3;
        }
        else{
            res = ceil(n/2.0);
        }
        cout << 5*res << "\n";
    }
}