#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x,n,k1,k2,r1,r2;
        cin >> x >> n;

        if(n%2 == 0){
            k1 = n/2;
            k2 = n/2;
        }else{
            k1 = (n/2)+1-((n/2)%2);
            k2 = (n/2)+((n/2)%2);
        }

        if(x%2 == 0){
            r2 = (((k1+k2)*(k2-k1)) + ceil(k2/2.0) - (k1/2)) + x;
            cout << r2 << endl;
        }else{
            r1 = (((k1+k2)*(k1-k2)) + (k1/2) - ceil(k2/2.0)) + x;
            cout << r1 << endl;
        }
    }
}