#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>arr(n);

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        map<int,int>freq;

        for(int i=0;i<n;i++){
            freq[arr[i]] += 1;
        }

        for(auto it = freq.begin();it!=freq.end();it++){
            if(it->second == 1){
                auto vit = find(arr.begin(),arr.end(),it->first);
                int d = distance(arr.begin(),vit);
                cout << d+1 << endl;
            }
        }
    }
}