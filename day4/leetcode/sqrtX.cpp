#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n){
    cout << "Printing" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}


long long int sqrtX( int n){


    int start = 0; 
    int end = n;

    long long int ans = -1;

    while(start < end){
        long long int mid = start + (end - start) / 2;
        long long int sqr = mid * mid;
        if(sqr == n){
            ans = mid;
            break;
        }else if(sqr < n){
            ans = mid; // may be a possible solution
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return ans;
    
    
}

double preciseSol(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i < precision; i++){
        factor = factor/10; // 1 -> 0.1 -> 0.001 -> 0.0001
        
        for(double j = ans; j*j < n; j+=factor){
            ans = j;
        }
    }

    return ans;
}

int main(){

    // in this make sure the array is sorted only (monotonic order : either ASC or DESC) then it will work

    int n;
    cout << "Enter Number : ";
    cin >> n;

    int tempSol = sqrtX(n);

    if(tempSol < 0){
        cout << -1;
    }else{
        double ans = preciseSol(n, 3, tempSol);

        cout << ans;
    }

    

    return 0;
}