#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        map<int,int>m;
        int n;
        cin >> n;

        for(int i=0;i<n;i++){
            int a,b;
            cin >> a >> b;

            if(a<=10){
                m[b] = i+1;
            }
        }
        auto lastEl = m.rbegin();
        cout << lastEl->second << endl;
    }
}