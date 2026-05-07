#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void peakIndex(int arr[], int n, int key){


    int start = 0;
    int end = n - 1;

    int index = -1;

    // find left most

    while(start < end){
        int mid = start + (end - start) / 2; 

        if(arr[mid]  < arr[mid + 1]){
            start = mid + 1;
        }else{
            end = mid;
        }

    }

    index = start;


    cout << index;

    
    
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

    int key;
    cout << "Enter key you want to search : ";
    cin>>key;

    peakIndex(arr,n, key);

    return 0;
}