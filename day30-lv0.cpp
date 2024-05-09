#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        unordered_map<int,int>m;
        int k;

        for(int i=0;i<n;i++){
            cin >> k;
            m[k]++;
        }
        int count = 0;

        for(auto it = m.begin();it != m.end();it++){
            if(it->second > 2){
                count++;
            }
        }
        cout << count << endl;
    }
}