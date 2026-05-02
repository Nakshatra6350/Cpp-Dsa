#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool isPower = true;

    int count = 0;

    // one approach

    // while(n != 0){
    //     if(n & 1){
    //         count++;
    //     }
    //     n = n >> 1;
    // }

    // cout << (count == 1);


    //another optimized approach

    cout << (n > 0 && (n & (n - 1)) == 0);
    

    return 0;
}