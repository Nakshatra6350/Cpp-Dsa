#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}


void solve(int arr[], int n, int arr2[], int m) {
    int index = 0;
    int i = 0;
    int j = 0;

    while(i < m && j < m){
        if(arr[i] < arr2[j]){
            arr[index] = arr[i];
            i++;
        }else{
            arr[index] = arr2[j];
            j++;
        }

        index++;
    }

    while(index < n && i < m){
        arr[index] = arr[i];
        index++;
        i++;
    }

    while(index < n && j < m){
        arr[index] = arr2[j];
        index++;
        j++;
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

    int m;
    cout << "Enter size of second array : ";
    cin>>m;

    int arr2[n];
    cout << "Enter elements of second array : ";
    for(int i = 0; i < m; i++){
        
        cin >> arr2[i];
    }

    int arr3[n + m];
    for(int i = 0; i < n; i++){
        arr3[i] =  arr[i];
    }

    solve(arr3,n+m, arr2, m);
    return 0;
}