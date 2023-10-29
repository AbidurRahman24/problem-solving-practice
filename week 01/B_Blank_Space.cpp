#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int mxCnt = 0;
        int cnt = 0;

        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                cnt++;
                mxCnt = max(mxCnt, cnt);
            } else {
                cnt = 0;
            }
        }

        cout << mxCnt << endl;
    }
    
    return 0;
}

/*
@ problem Link: https://codeforces.com/contest/1829/problem/B
@ Problem Statement:

B. Blank Space
time limit per test 1 second

You are given a binary array a
 of n
 elements, a binary array is an array consisting only of 0
s and 1
s.

A blank space is a segment of consecutive elements consisting of only 0
s.

Your task is to find the length of the longest blank space.

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of the array.

The second line of each test case contains n
 space-separated integers ai
 (0≤ai≤1
) — the elements of the array.

Output
For each test case, output a single integer — the length of the longest blank space.

Example
inputCopy
5
5
1 0 0 1 0
4
0 1 1 1
1
0
3
1 1 1
9
1 0 0 0 1 0 0 0 1
outputCopy
2
1
1
0
3
*/