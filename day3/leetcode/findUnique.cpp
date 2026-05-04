#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void findUnique(int arr[], int n){
    int ans = 0;

    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }

    cout << "Unique element : " << ans;
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

    findUnique(arr,n);

    return 0;
}