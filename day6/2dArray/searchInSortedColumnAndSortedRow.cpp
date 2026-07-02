#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> arr = {
        {1, 4, 7, 11, 15},
        {2,5,8, 12, 19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26, 30},
    };
    // 1,2,3,4,5,6,7,8,9 

    int row = arr.size();
    int col = arr[0].size();
    int target = 111;

    int rowIndex = 0;
    int colIndex = col - 1;

    
    while(rowIndex < row && colIndex >= 0){
        int element = arr[rowIndex][colIndex];
        if(element == target){
            cout << " true";
            return 0;
        }else if(element < target){
            rowIndex++;
        }else{
            colIndex--;
        }
    }

    cout << "False";

    return 0;
}