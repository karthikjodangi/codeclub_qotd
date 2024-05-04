//sorting pairs
#include<bits/stdc++.h>
using namespace std;

bool myCompare(pair<string,int> &a, pair<string,int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    int n;
    cin >> n;

    vector<pair<string,int>> v(n,{"",0});
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end(),myCompare);

    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }

}