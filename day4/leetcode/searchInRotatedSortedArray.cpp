#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int findPivotIndex(int arr[], int n){


    int start = 0;
    int end = n - 1;

    int ans = -1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }
    }

    if(start >= 0){
        ans = start;
        return ans;
    }

    return -1;
    
    
}


int binarySearch(int arr[], int start, int end, int key){

    while(start <= end){
        int mid = start + (end - start) / 2; // or that to calculate mid

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return -1;
    
}

void searchInRotatedSortedArr(int arr[], int n, int key){


    int start = 0;
    int end = n - 1;

    int pivotIndex = findPivotIndex(arr,n);

    if(pivotIndex < 0){
        cout << -1;
        return;
    }

    int ans = -1;

    if(pivotIndex == 0){
        // array not rotated, plain binary search
        ans = binarySearch(arr, start, end, key);

    }else if(arr[pivotIndex] <= key && key <= arr[end]){

        ans = binarySearch(arr, pivotIndex, end, key);

    }else{
        ans = binarySearch(arr, start, pivotIndex - 1, key);
    }

    cout << ans;

    // int firstHalf = binarySearch(arr, start, pivotIndex - 1, key);
    

    // if(firstHalf < 0){
    //     int secondHalf = binarySearch(arr, pivotIndex, end, key);
    //     if(secondHalf < 0){
    //         cout << -1;
    //         return;
    //     }else{
    //         ans = secondHalf;
    //     }
    // }else{
    //     ans = firstHalf;
    // }

    // cout << ans;
    
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

    int key;
    cout << "Enter key you want to search : ";
    cin>>key;

    searchInRotatedSortedArr(arr,n, key);

    return 0;
}