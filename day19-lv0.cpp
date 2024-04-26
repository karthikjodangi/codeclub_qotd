// For Division 1: 1900≤rating
// For Division 2: 1600≤rating≤1899
// For Division 3: 1400≤rating≤1599
// For Division 4: rating≤1399
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

        if(n >= 1900){
            cout << "Division 1" << "\n";
        }
        else if(n >= 1600){
            cout << "Division 2" << "\n";
        }
        else if(n >= 1400){
            cout << "Division 3" << "\n";
        }
        else {
            cout << "Division 4" << "\n";
        }
    }
}