#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c = 0;
        cin >> a;

        for(int i=0;i<3;i++){
            cin >> b;
            if(b > a){
                c++;
            }
        }
        cout << c << "\n";
    }
}