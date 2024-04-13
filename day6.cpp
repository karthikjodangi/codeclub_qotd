// Count Increasing Sub-Arrays.
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n,0);

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        int count = 0;
        int i=0,j=0,k=0;

        for(int i=0;i<n;i++){
            j = i;
            k = i+1;
            while(arr[j] < arr[k] && k<n){
                count++;
                j++;
                k++;
            }
        }
        cout << count+n << "\n";
    }
}