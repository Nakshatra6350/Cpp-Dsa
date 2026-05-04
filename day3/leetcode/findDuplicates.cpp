#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void findDuplicates(int arr[], int n){

    //approach one

    // int ans = -1;

    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(arr[i] == arr[j]){
    //             ans = arr[i];
    //             break;
    //         }
    //     }
    // }

    // cout << "Duplicate : " << ans;


    // approach two
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }

    for(int i = 1; i < n; i++){
        ans = ans ^ i;
    }

    cout << ans;
}

int main(){

    int n;
    cout << "Enter size of an array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of an array : ";
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
    }

    findDuplicates(arr,n);

    return 0;
}