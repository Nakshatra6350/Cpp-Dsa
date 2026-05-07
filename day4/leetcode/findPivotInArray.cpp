#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}


void findMaxPivot(int arr[], int n){


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
    
    cout << arr[start - 1] << " ";
    
    
}

void findMinPivot(int arr[], int n){


    int start = 0;
    int end = n - 1;

    int ans = -1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] >= arr[0]){ // if this cond is true then it means that i have to seach in second line
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    
    cout << arr[start] << " ";
    
    
}

int main(){

    // in this make sure the array is sorted only (monotonic order : either ASC or DESC) then it will work

    int n;
    cout << "Enter size of first array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of first array : ";
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
    }

    findMinPivot(arr,n);

    findMaxPivot(arr,n);

    return 0;
}