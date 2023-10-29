#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(8); // Assuming each grid is 10x10.
        for (int i = 0; i < 8; i++) 
        {
            cin >> grid[i];
        }
        
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if(grid[i][j] != '.')
                {
                    cout<<grid[i][j]; 

                }
            }
        }
            cout<<endl;
        
    }
    return 0;
}