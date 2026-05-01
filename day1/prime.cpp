#include<iostream>
using namespace std;

int main(){

    int n = 6;

    int num = 2;

    while (num < n)
    {
        if(n % num == 0){
            cout << "Not a prime number" << endl;
            return 0;
        }else{
            num++;
        }
    }

    cout << "prime number" << endl;
    

    return 0;
}