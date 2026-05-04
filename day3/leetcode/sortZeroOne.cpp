#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void sortZeroOne(int arr[], int n){

    int left = 0;
    int right = n - 1;


    //approach one

    while(left < right){
        // move left forward until we find a 1
        while(left < right && arr[left] == 0)
            left++;

        // move right backward until we find a 0
        while(left < right && arr[right] == 1)
            right--;

        // swap misplaced 1 and misplaced 0
        if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }


    //approach two

    // int count0 = 0;

    // // count number of 0s
    // for(int i = 0; i < n; i++)
    //     if(arr[i] == 0) count0++;

    // // fill count0 zeros, then rest ones
    // for(int i = 0; i < n; i++)
    //     arr[i] = (i < count0) ? 0 : 1;
    

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

    sortZeroOne(arr,n);

    return 0;
}