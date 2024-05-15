#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i = 0, j = n-1, s1 = 0, s2 = 0, k = 0;
    while(k < n){
        if(k%2 == 0){
            if(arr[j] > arr[i]){
                s1 += arr[j];
                j--;
            }else{
                s1 += arr[i];
                i++;
            }
        }else{
            if(arr[j] > arr[i]){
                s2 += arr[j];
                j--;
            }else{
                s2 += arr[i];
                i++;
            }
        }
        k++;
    }
    cout << s1 << " " << s2 << endl;
}