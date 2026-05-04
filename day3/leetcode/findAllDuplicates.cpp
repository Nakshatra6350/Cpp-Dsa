#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void findAllDuplicates(int arr[], int n){

    //approach one

    vector<int> result;
    bool visited[n];
    fill(visited, visited + n, false);

    for(int i = 0; i < n; i++){
        if(visited[i]) continue;

        for(int j = i+1; j < n; j++){        
            if(arr[i] == arr[j]){
                result.push_back(arr[i]);     
                visited[j] = true;            
                break;
            }
        }
    }

    if(result.empty()){
        cout << "No duplicates found" << endl;
        return;
    }

    for(int x : result) cout << x << " ";



    // approach two

    unordered_map<int,int> freqMap;

    for(int i = 0; i < n; i++){
        freqMap[arr[i]]++;                   
    }

    bool found = false;
    for(auto it : freqMap){
        if(it.second > 1){                   
            cout << it.first << " ";
            found = true;
        }
    }

    if(!found) cout << "No duplicates found";
    
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

    findAllDuplicates(arr,n);

    return 0;
}