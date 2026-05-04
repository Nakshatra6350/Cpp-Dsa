#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

int main(){

    int arr[10]; // array is declared with garbage value initialized

    int allZero[10] = {0}; // all places are initialized by 0. only possible with 0, When you partially initialize an array, all remaining elements are zero-initialized — this is a C++ standard rule.

    int number[5] = {1,2,3,4,5}; // declare and initializing an array

    int n;
    cin >> n;

    int inArr[n];

    for(int i = 0; i < n; i++){
        cin >> inArr[i];
    }

    cout << inArr << endl;

    printArray(inArr, n);

    int inArrSize = sizeof(inArr) / sizeof(int); // issue with this is if array size is 10 and only 2 elements are their then we cannot find the size of array 2, we will always be find it 10

    cout << endl;

    cout << "size : " << inArrSize << endl;


    char ch[5] = {'a', 'b', 'c', 'd'};
    cout << ch;

    



    return 0;
}
