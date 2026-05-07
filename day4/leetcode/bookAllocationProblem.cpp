#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}

bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1, pageSum = 0;
    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid)
            pageSum += arr[i];
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
                return false;
            pageSum = arr[i];
        }
    }
    return true;
}

void solve(int arr[], int n, int m) {
    int start = 0; // min possible answer
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i]; // max possible answer

    int end = sum;

    int ans = -1; 

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    cout << ans;
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
    cout << "Enter number of students : ";
    cin>>m;

    solve(arr,n, m);
    return 0;
}