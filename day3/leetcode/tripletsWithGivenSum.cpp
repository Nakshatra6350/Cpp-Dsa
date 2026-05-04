#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void tripletsWithGivenSum(int arr[], int n, int target){
    sort(arr, arr + n);                           // sort first
    vector<vector<int>> ans;

    for(int i = 0; i < n - 2; i++){

        // skip duplicates for i
        if(i > 0 && arr[i] == arr[i-1]) continue;

        int left = i + 1;                         // left pointer
        int right = n - 1;                        // right pointer

        while(left < right){
            int currSum = arr[i] + arr[left] + arr[right];

            if(currSum == target){
                ans.push_back({arr[i], arr[left], arr[right]});

                // skip duplicates for left and right
                while(left < right && arr[left] == arr[left+1]) left++;
                while(left < right && arr[right] == arr[right-1]) right--;

                left++;
                right--;

            } else if(currSum < target){
                left++;                           // need bigger sum
            } else {
                right--;                          // need smaller sum
            }
        }
    }

    for(auto& triplet : ans){
        for(int x : triplet) cout << x << " ";
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter size of first array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of first array : ";
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
    }

    int sum = 9;

    tripletsWithGivenSum(arr,n, sum);

    return 0;
}