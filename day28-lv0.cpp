#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int time = 0;
        time += (int(s[0]) - 48) * 10;
        time += (int(s[1]) - 48);

        if(time == 0){
            s[0] = '1';
            s[1] = '2';
            cout << s << " AM" << endl;
        }else if(time == 12){
            cout << s << " PM" <<endl;
        }else if(time >= 12){
            time = time - 12;
            s[0] = char(48 + time/10);
            s[1] = char(48 + time%10);
            cout << s << " PM" << endl;

        }else{
            cout << s << " AM" << endl;
        }
    }
}