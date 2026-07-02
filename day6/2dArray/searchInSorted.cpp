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
    // 1,2,3,4,5,6,7,8,9 

    int row = arr.size();
    int col = arr[0].size();
    int target = 11;

    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while(start <= end){
        int element = arr[mid / col][mid % col]; 

        // above example we have to find 6, in linear array it will be at index 5, so 5 / no. of col (3) = 1 which will render row
        // and then 5 % 3 gives me 2 which will be column so it will be arr[1][2]

        if(element == target){
            cout << "True";
            return 0;
        }else if(element < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    cout << "False";

    return 0;
}