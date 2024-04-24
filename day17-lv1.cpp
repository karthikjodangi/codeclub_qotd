#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    char col;

    bool f = false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> col;

            if(col == 'C' || col == 'M' || col == 'Y'){
                f = true;
                break;
            }
        }
        if(f){
            break;
        }
    }
    if(f){
        cout << "#Color";
    }
    else{
        cout << "#Black&White";
    }

}