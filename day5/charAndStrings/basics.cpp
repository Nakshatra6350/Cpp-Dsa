#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}



int getLength(char name[]){

    int count  = 0;

    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){


    char ch[10];

    cin>> ch;

    cout << ch << endl;

    cout << getLength(ch) << endl;
 
   cout << (sizeof(ch)/sizeof(char)); 

    return 0;
}