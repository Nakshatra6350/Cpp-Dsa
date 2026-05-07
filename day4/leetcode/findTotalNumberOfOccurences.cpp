#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void findTotalOccurences(int arr[], int n, int key){

    pair<int, int> ans = {-1,-1};

    int start = 0;
    int end = n - 1;

    int first = -1;
    int last = -1;

    // find left most

    while(start <= end){
        int mid = start + (end - start) / 2; 

        if(arr[mid] == key){
            first = mid;
            end = mid - 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }

    }


    //find right most with resetting start and end

    start = 0;
    end = n - 1;

    while(start <= end){
        int mid = start + (end - start) / 2; 

        if(arr[mid] == key){
            last = mid;
            start = mid + 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }

    }


    ans.first = first;
    ans.second = last;

    cout << (ans.first == -1 ? 0 : (ans.second - ans.first) + 1);

    
    
}

int main(){

    // in this make sure the array is sorted only (monotonic order : either ASC or DESC) then it will work

    int n;
    cout << "Enter size of first array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of first array : ";
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
    }

    int key;
    cout << "Enter key you want to search : ";
    cin>>key;

    findTotalOccurences(arr,n, key);

    return 0;
}