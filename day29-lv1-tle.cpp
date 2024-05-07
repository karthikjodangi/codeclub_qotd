#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        if(m > n){
            m = m+n;
            n = m-n;
            m = m-n;
        }
        if(n==1 && m==1){
            cout << 0 << endl;
        }else if(m==1){
            cout << n << endl;
        }else{
            set<pair<int,int>>st;
            int i,j,k;
            for(i=1;i<=m/2;i++){
                st.insert({0,i});
            }
            i = i-1;
            for(j=1;j<n;j++){
                st.insert({j,i});
            }
            j = j-1;
            for(int k=i+1;k<m;k++){
                st.insert({j,k});
            }

            for(i=1;i<=m/2;i++){
                st.insert({n-1,i});
            }
            i = i-1;
            for(j=n-2;j>=0;j--){
                st.insert({j,i});
            }
            j = j+1;
            for(int k=i+1;k<m;k++){
                st.insert({j,k});
            }
            cout << st.size()+2 << endl;
        }
    }
}

