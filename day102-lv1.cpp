#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    int s_len = s.length();
    int t_len = t.length();

    int i = s_len-1, j = t_len-1;
    int count = 0;
    while(s[i] == t[j] && i>-1 && j>-1){
        count++;
        i--;
        j--;
    }
    cout << (s_len + t_len) - (2 * count) << endl;
}