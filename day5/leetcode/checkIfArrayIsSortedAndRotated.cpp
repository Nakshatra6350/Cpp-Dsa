#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int findPivot(int arr[], int n){
    int start = 0;
    int end = n - 1;
    while(start < end){
        int mid = start + (end - start) / 2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }
    }

    return start;
}

bool isSorted(int arr[], int start, int end){
    
    for(int i = start ; i < end - 1; i++){
        if(arr[i] > arr[i + 1]){
            return false;
        }
    }

    return true;
}


void solve(int arr[], int n) {
    // int pivotIndex = findPivot(arr,n);    

    // bool leftSorted = isSorted(arr, 0, pivotIndex - 1);
    // bool rightSorted = isSorted(arr, pivotIndex, n - 1);

    // if(leftSorted && rightSorted){
    //     cout << "True";
    // }else{
    //     cout << "False";
    // }


    // another approach
    int count = 0;

    for(int i = 1; i < n; i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }

    if(arr[n - 1] > arr[0]){
        count++;
    }

    cout << (count <= 1); // means only one pair exist in which one value is greater than its previous element or all elements are same
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

    solve(arr,n);
    return 0;
}