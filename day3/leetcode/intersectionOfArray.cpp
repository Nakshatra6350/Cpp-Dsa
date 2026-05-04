#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void intersection(int arr[], int n, int arr2[], int m){

    vector<int> ans;

    // approach one

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         if(arr[i] < arr2[j]){
    //             break;
    //         }
    //         if(arr[i] == arr2[j]){
    //             ans.push_back(arr[i]);
    //             arr2[j] = INT_MIN;
    //         }
    //     }
    // }

    // if(ans.size()){
    //     for(int i = 0; i < ans.size(); i++){
    //         cout << ans[i] << " ";
    //     }
    // }else{
    //     cout << -1;
    // }


    int i = 0; 
    int j = 0;

    while (i < n && j < m)
    {
        if(arr[i] == arr2[j]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }else if(arr[i] < arr2[j]){
            i++;
        }else{
            j++;
        }
    }


    if(ans.size()){
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
    }else{
        cout << -1;
    }

   
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
    cin >> m;

    int arr2[m];
    cout << "Enter elements of second array : ";
    for(int i = 0; i < m; i++){
        
        cin >> arr2[i];
    }

    intersection(arr,n, arr2, m);

    return 0;
}