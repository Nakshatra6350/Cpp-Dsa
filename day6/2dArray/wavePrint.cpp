#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int rows = 3;
    int cols = 3;
    int arr[rows][cols] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for(int col = 0; col < cols; col++){
        if(col & 1){
            //odd -> bottom to top
            for(int row = rows - 1; row >= 0; row--){
                cout << arr[row][col] << " ";
            }
        }else{
            // 0 or even index -> top to bottom
            for(int row = 0; row < rows; row++){
                cout << arr[row][col] << " ";
            }
        }
    }

    return 0;
}