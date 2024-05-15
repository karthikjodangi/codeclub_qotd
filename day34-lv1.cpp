#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    ch = toupper(ch);
    return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y';
}

int main(){
    string s;
    cin >> s;

    string res;

    for(int i=0;i<s.length();i++){
        if(!isVowel(s[i])){
            res.push_back('.');
            if(isupper(s[i])){
                res.push_back(char(tolower(s[i])));
            }else{
                res.push_back(s[i]);
            }
        }
    }
    cout << res << endl;
}