#include<bits/stdc++.h>
using namespace std;

int getMax(vector<int> arr,int n){
    int max = INT_MIN;
    int index = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        vector<int> res;
        int index = 0;
        while(index < n){
            int i = getMax(arr,n);
            arr[i] -= k;
            if(arr[i] <1){
                res.push_back(i+1);
                index++;
            }
        }

        for(int i=0;i<index;i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
}