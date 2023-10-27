#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        // vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Initialize variables to keep track of the maximum product and the index to add 1.
        long long max_product = 1; // Use long long to handle large numbers.
        int mn = -1; // Initialize with -1, meaning no 1 has been added yet.

        // Find the index of the smallest digit.
        for (int i = 0; i < n; i++) {
            if (arr[i] < arr[mn] || mn == -1) 
            {
                mn = i;
            }
        }

        // Calculate the maximum product with 1 added to the smallest digit.
        for (int i = 0; i < n; i++) {
            if (i == mn) 
            {
                max_product *= (arr[i] + 1);
            } 
            else 
            {
                max_product *= arr[i];
            }
        }

        cout << max_product << endl;
    }

    return 0;
}
