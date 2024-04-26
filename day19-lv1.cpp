#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }

        int m = *max_element(arr, arr + 3);

        bool tie = false;
        for (int i = 0; i < 3; i++) {
            if (arr[i] == m && count(arr, arr + 3, m) > 1) {
                tie = true;
                break;
            }
        }

        for (int i = 0; i < 3; i++) {
            if (tie || arr[i] < m) {
                arr[i] = m - arr[i] + 1;
            } else {
                arr[i] = 0;
            }
        }

        for (int i = 0; i < 3; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
