#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,big=INT_MIN,small=INT_MAX,max_ind = 0,min_ind =0;
    cin >> n;

    vector<int> arr(n,0);

    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] > big){
            big = arr[i];
            max_ind = i;
        }
        if(arr[i] < small){
            small = arr[i];
            min_ind = i;
        }
    }
    arr[min_ind] = big;
    arr[max_ind] = small;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }


}