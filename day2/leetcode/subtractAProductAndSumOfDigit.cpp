#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int prod = 1;
    int sum = 0;

    while(n != 0){
        int rem = n % 10;
        prod *= rem;
        sum += rem;
        n = n/10;
    }

    cout << (prod - sum) << endl;

    return 0;
}