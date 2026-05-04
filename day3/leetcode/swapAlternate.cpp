#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void swapAlternate(int arr[], int n){

    //approach one

    // int i = 0;

    // while (i < n){

    //     int j = i + 1;

    //     if(j < n){

    //         int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
            
    //     }

    //     i+=2;
        
    // }


    //approach 2

    for(int i = 0; i < n; i+=2){
        if(i + 1 < n){
            swap(arr[i], arr[i + 1]);
        }
    }
    

    printArray(arr, n);
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

    swapAlternate(arr,n);

    return 0;
}