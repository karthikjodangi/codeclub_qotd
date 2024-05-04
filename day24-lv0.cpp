#include<bits/stdc++.h>
using namespace std;

bool spellCheck(int n,string s){
    if(n != 5){
        return false;
    }
    set<char>s1 = {'T','i','m','u','r'};
    set<char>s2;

    for(int i=0;i<5;i++){
        s2.insert(s[i]);
    }
    if(s1 == s2){
        return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        if(spellCheck(n,s)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}