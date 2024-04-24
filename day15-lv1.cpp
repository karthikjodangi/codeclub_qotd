//two divisors
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int ans = 0;

        if(a == 1){
            ans = b*b;
        }
        else if(b % a == 0){
            ans = b*(b/a);
        }
        else{
            ans = lcm(a,b);
        }
        cout << ans << endl;
    }
}