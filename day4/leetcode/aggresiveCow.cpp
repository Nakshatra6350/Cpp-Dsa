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
    int cow = 1, lastPos = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] - lastPos >= mid){
            cow++;
            if(cow == m){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

void solve(int arr[], int n, int m) {
    int start = 0;
    
    int maxi = -1;

    sort(arr, arr + n);

    

    int end = arr[n - 1];

    int ans = -1; 

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << ans;


    // brute force approach

    // pair<int, int> res = {-1,-1};
    // int ans = -1;

    // for(int i = 0; i < n - 1; i++){
    //     for(int j = i + 1; j < n; j++){
    //         int diff = arr[i] - arr[j];
    //         int absDiff = abs(diff);
    //         if(absDiff > ans){
    //             ans = absDiff;
    //             res.first = arr[i];
    //             res.second = arr[j];
    //         }
    //     }
    // }

    // cout << res.first <<" " << res.second << endl;
    // cout << ans;
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
    cout << "Enter number of cows : ";
    cin>>m;

    solve(arr,n, m);
    return 0;
}