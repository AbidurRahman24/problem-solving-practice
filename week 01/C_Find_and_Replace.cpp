#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int mp[26] = {0};
        bool canConvert = true;

        for (int i = 0; i < n; i++) {
            int curr = s[i] - 'a';
            if (mp[curr] == 0) 
            {
                mp[curr] = i % 2 + 1;
            } 
            else if (mp[curr] != i % 2 + 1) 
            {
                canConvert = false;
                break;
            }
        }

        if (canConvert) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
