#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n,0);

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        int min_el = INT_MAX;
        int index = 0;
        for(int i=0;i<n;i++){
            if(arr[i] < min_el){
                min_el = arr[i];
                index = i;
            }
        }
        arr[index]++;

        int prod = 1;
        for(int i=0;i<n;i++){
            prod *= arr[i];
        }
        cout << prod << endl;
    }
}