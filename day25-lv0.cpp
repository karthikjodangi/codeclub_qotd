#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char>st;

    string str;
    getline(cin, str);

    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            st.insert(str[i]);
        }
    }
    cout << st.size() << endl;
}