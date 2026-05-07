#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void peakIndex(int arr[], int n){


    int start = 0;
    int end = n - 1;

    int index = -1;


    while(start < end){
        int mid = start + (end - start) / 2; 

        if(arr[mid]  < arr[mid + 1]){ // if this cond is true then it means that i have to seach in second line
            start = mid + 1;
        }else{
            end = mid;
        }

    }

    index = start;


    cout << index;

    
    
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

    peakIndex(arr,n);

    return 0;
}