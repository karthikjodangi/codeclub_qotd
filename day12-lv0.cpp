// way too long words
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int l = s.length();
        if (l > 10)
        {
            cout << s[0] << l - 2 << s[l - 1] << "\n";
        }
        else
        {
            cout << s << "\n";
        }
    }
}