#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = arr.size();
    int col = arr[0].size();

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = col - 1;

    while (count < total) {

        // Print starting row
        for (int i = startingCol; i <= endingCol && count < total; i++) {
            cout << arr[startingRow][i] << " ";
            count++;
        }
        startingRow++;

        // Print ending column
        for (int i = startingRow; i <= endingRow && count < total; i++) {
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        // Print ending row
        for (int i = endingCol; i >= startingCol && count < total; i--) {
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // Print starting column
        for (int i = endingRow; i >= startingRow && count < total; i--) {
            cout << arr[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }

    return 0;
}