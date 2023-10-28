#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int mx = INT_MIN;
        int pos = 1;

        for (int i = 1; i <= x; i++) {
            int a, b;
            cin >> a >> b;

            if (a <= 10 && b > mx) {
                mx =  b;
                pos = i;
            }
        }
        
        cout << pos << endl;
    }

    return 0;
}
