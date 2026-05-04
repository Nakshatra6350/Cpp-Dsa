#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

void uniqueNumberOfOccurences(int arr[], int n){

    int count[n] = {0};

    bool visited[n];

    fill(visited, visited + n, false);

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            int freq = 1;
            for(int j = i+1; j < n; j++){      
                if(arr[j] == arr[i]){
                    freq++;
                    visited[j] = true;
                }
            }
            count[i] = freq;
        }
    }

    for(int i = 0; i < n; i++){
        if(count[i] == 0) continue;
        for(int j = i+1; j < n; j++){           
            if(count[j] == 0) continue;
            if(count[i] == count[j]){
                cout << "Is unique : false" << endl;
                return;
            }
        }
    }

    cout << "Is unique : true" << endl;
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

    uniqueNumberOfOccurences(arr,n);

    return 0;
}