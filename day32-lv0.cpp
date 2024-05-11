#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int f, s;
        f = a + ceil(c/2.0);
        s = b + floor(c/2.0);

        if(f > s){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;
        }
    }
}