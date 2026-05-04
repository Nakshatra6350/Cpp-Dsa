#include<iostream>
using namespace std;

void printMaxAndMin(int arr[], int n){
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "MAX : " << max << endl;
    cout << "MIN : " << min << endl;
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

    printMaxAndMin(arr,n);

    return 0;
}