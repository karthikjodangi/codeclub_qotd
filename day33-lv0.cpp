#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int count = 1;
    int i = 0,j, length = INT_MIN;

    while(i<n){
        count = 1;
        for(j=i;j<n-1;j++){
            if(arr[j] < arr[j+1]){
                count++;
            }else{
                break;
            }
        }
        length = max(length,count);
        i = j+1;
    }
    cout << length << endl;
}
