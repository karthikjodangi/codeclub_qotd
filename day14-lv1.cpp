//ilya and queries
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int n = s.length();
    int q;
    cin >> q;

    while(q--){
        int l,r,count = 0;
        cin >> l >> r;

        for(int i=l;i<r;i++){
            if(s[i-1] == s[i]){
                count++;
            }
        }
        cout << count << endl;
        
    }
}
// #..###
// 5
// 1 3
// 5 6
// 1 5
// 3 6
// 3 4
