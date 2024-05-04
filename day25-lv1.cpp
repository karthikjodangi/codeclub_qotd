#include<bits/stdc++.h>
using namespace std;

int getPoint(int i, int j){
    if(i == 0 || j == 0 || i == 9 || j == 9){
        return 1;
    }else if(i == 1 || j == 1 || i == 8 || j == 8){
        return 2;
    }else if(i == 2 || j == 2 || i == 7 || j == 7){
        return 3;
    }else if(i == 3 || j == 3 || i == 6 || j == 6){
        return 4;
    }else{
        return 5;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        char arr[10][10];

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin >> arr[i][j];
            }
        }

        int sum = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(arr[i][j] == 'X'){
                    sum += getPoint(i,j);
                }
            }
        }
        cout << sum << endl;
    }
}