#include<bits/stdc++.h>
using namespace std;

int main(){
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if(r1 < l2 || r2 < l1){
        cout << "-1";
    }
    else if(l1 < l2 && r2 < r1){
        cout << l2 << " " << r2;
    }
    else if(l1 > l2 && r2 > r1){
        cout << l1 << " " << r1;
    }
    else if(l1 <= l2 && r1 <= r2){
        cout << l2 << " " << r1;
    }
    else if(l1 >= l2 && r1 >= r2){
        cout << l1 << " " << r2;
    }
    else if(r1 == l2){
        cout << r1 << " " << r1;
    }
    else if(r2 == l1){
        cout << r2 << " " << r2;
    }

}