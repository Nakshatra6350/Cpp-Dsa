#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = arr.size();

    // Step 1: Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(arr[i].begin(), arr[i].end());
    }

    // Print rotated matrix
    for (auto &row : arr) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}