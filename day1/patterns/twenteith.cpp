#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i <= n){
        int end = n - i + 1;
        int j = 1;
        while(j <= end){
            cout << "*" ;
            j++;
        }
        

        i++;
        cout << endl;
    }

    return 0;
}