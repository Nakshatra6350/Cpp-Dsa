#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void selectionSort(int arr[], int n){

    for(int i = 0; i < n - 1; i++){
        int mini = i;
        for(int j = i + 1; j < n ; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
    }
    

    printArray(arr,n);
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

    selectionSort(arr,n);

    return 0;
}