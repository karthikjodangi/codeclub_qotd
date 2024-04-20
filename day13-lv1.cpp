#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> arr(n,vector<int>(2,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin >> arr[i][j];
            }
        }
        int max1 = INT_MIN;
        int min2 = INT_MAX;

        for(int i=0;i<n;i++){
            if(arr[i][0] == 1){
                max1 = max(max1,arr[i][1]);
            }
            else if(arr[i][0] == 2){
                min2 = min(min2,arr[i][1]);
            }
        }

        if(min2 < max1){
            cout << "0" << "\n";
            continue;
        }

        int res = min2 - max1 + 1;
        // cout << res << "\n";
        for(int i=0;i<n;i++){
            if(arr[i][0] == 3){
                if(arr[i][1] >= max1 && arr[i][1] <= min2){
                    res--;
                }
            }
        }
        cout << res << "\n";
    }
}