#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}


void solve(int arr[], int n, int k) {
    while(k){
        int temp = arr[n - 1];
        int i = n - 1;
        while(i > 0){
            arr[i] = arr[ i - 1];
            i--;
        }

        arr[0] = temp;
        k--;
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

    int k;
    cout << "Enter time you want to rotate : ";
    cin>>k;

    solve(arr,n,k);
    return 0;
}