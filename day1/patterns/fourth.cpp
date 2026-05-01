#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i <= n){

        // int j = n;
        // while(j > 0){
        //     cout << j;
        //     j--;
        // }

        int j = 1;
        while(j <= n){
            cout << n-j+1;
            j++;
        }

        i++;
        cout << endl;
    }

    return 0;
}