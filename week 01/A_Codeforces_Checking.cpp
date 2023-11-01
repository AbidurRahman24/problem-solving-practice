#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) {
        string s = "codeforces";
        char c;
        cin >> c;
        bool found = false;

        for (char i : s) {
            if (i == c) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}