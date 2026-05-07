#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void binarySearch(int arr[], int n, int key){

    int start = 0;
    int end = n - 1;

    // int mid = start + (end - start) / 2; // either this

    while(start <= end){
        int mid = start + (end - start) / 2; // or that to calculate mid

        if(arr[mid] == key){
            cout << "Index : " << mid;
            return;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }

        // mid = start + (end - start) / 2;
    }

    cout << "Not Found : " << -1;
    
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

    binarySearch(arr,n, key);

    return 0;
}