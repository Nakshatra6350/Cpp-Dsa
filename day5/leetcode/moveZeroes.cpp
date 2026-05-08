#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}


void solve(int arr[], int n) {
    // int count = 0;
    // int index = 0;
    // int i = 0;
    // while(i < n){
    //     if(arr[i] == 0){
    //         count++;
    //     }else{
    //         arr[index] = arr[i];
    //         index++;
    //     }

    //     i++;
    // }

    // while(index < n && count){
    //     arr[index] = 0;
    //     index++;
    //     count--;
    // }

    //another approach

    int index = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[index], arr[i]);
            index++;
        }
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

    solve(arr,n);
    return 0;
}