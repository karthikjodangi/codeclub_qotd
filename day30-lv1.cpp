#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        unordered_set<string>v1(n);
        unordered_set<string>v2(n);
        unordered_set<string>v3(n);
        string str;
        int a = 0, b = 0, c = 0;

        for(int i=0;i<n;i++){
            cin >> str;
            v1.insert(str);
        }
        for(int i=0;i<n;i++){
            cin >> str;
            v2.insert(str);
        }
        for(int i=0;i<n;i++){
            cin >> str;
            v3.insert(str);
        }

        for(auto it = v1.begin();it!=v1.end();it++){
            string s = *it;
            auto f2 = v2.find(s);
            auto f3 = v3.find(s);
            if(f2 != v2.end() && f3 != v3.end()){
                v2.erase(s);
                v3.erase(s);
            }else if(f2 != v2.end()){
                a += 1;
                b += 1;
                v2.erase(s);
            }else if(f3 != v3.end()){
                a += 1;
                c += 1;
                v3.erase(s);
            }else{
                a += 3;
            }
        }

        for(auto it = v2.begin();it!=v2.end();it++){
            string s = *it;
            auto f3 = v3.find(s);
            if(f3 != v3.end()){
                b += 1;
                c += 1;
                v3.erase(s);
            }else{
                b += 3;
            }
        }

        c += v3.size()*3;
        cout << a << " " << b << " " << c << endl;
    }
}