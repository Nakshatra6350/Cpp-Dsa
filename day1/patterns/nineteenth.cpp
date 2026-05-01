#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i <= n){

        int space = n - i;
        while(space){
            cout << " ";  
            space--;
        }

        int col = 1;
        while (col <= i){
            cout << "*";
            col++;
        }
        

        i++;
        cout << endl;
    }

    return 0;
}