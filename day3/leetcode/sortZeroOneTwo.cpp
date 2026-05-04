#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void sortZeroOneTwo(int arr[], int n){

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    int size = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;        
        else count2++;
    }

    // for(int i = 0 ; i < count0; i++){
    //     if(size < n){
    //         arr[size] = 0;
    //         size++;
    //     }
    // }

    // for(int i = 0 ; i < count1; i++){
    //     if(size < n){
    //         arr[size] = 1;
    //         size++;
    //     }
    // }

    // for(int i = 0 ; i < count2; i++){
    //     if(size < n){
    //         arr[size] = 2;
    //         size++;
    //     }
    // }

    while (count0)
    {
        /* code */

        arr[size] = 0;
        size++;
        count0--;
    }
    
    while (count1)
    {
        /* code */

        arr[size] = 1;
        size++;
        count1--;
    }

    while (count2)
    {
        /* code */

        arr[size] = 2;
        size++;
        count2--;
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

    sortZeroOneTwo(arr,n);

    return 0;
}