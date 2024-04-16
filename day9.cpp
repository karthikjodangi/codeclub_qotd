#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s1,s2;
        cin >> s1 >> s2;

        int l1 = s1.length();
        int l2 = s2.length();
        int l3 = max(l1,l2)*2;

        string s3;
        s3.resize(l3);
        int i=0;

        if(l1 == l2){
            for(i=0;i<2*l1;i+=2){
                s3[i] = s1[i/2];
                s3[i+1] = s2[i/2];
            }
        }
        else{
            if(l1 > l2){
                int j=0;
                for(i=0;i<2*l2;i+=2){
                    s3[i] = s1[i/2];
                    s3[i+1] = s2[i/2];
                }
                while(j < (l1-l2)){
                    s3[i] = s1[l2+j];
                    j++;
                    i++;
                }
            }
            else{
                int j=0;
                for(i=0;i<2*l1;i+=2){
                    s3[i] = s1[i/2];
                    s3[i+1] = s2[i/2];
                }
                while(j < (l2-l1)){
                    s3[i] = s2[l1+j];
                    j++;
                    i++;
                }
            }
        }
        s3[i] = '\0';
        cout << s3 << "\n";
    }
}