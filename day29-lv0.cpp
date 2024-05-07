#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int>arr(n);
    pair<int,int>unit;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int d;
    int min_d = INT_MAX;

    for(int i=0;i<n;i++){
        d = abs(arr[i] - arr[(i+1)%n]);
        if(d < min_d){
            min_d = d;
            unit.first = i+1;
            unit.second =  ((i+1)%n) + 1;
        }
    }
    cout << unit.first << " " << unit.second;
}