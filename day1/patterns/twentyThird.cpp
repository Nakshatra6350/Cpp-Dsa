#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i <= n){
        int j = 1;
        while(j <= n - i + 1){
            cout << j << " ";
            j++;
        }

        int firstStar = i - 1;
        while(firstStar){
            cout << "*" << " ";
            firstStar--;
        }

        int secondStar = i - 1;
        while (secondStar){
            cout << "*" << " ";
            secondStar--;
        }

        int end = n - i + 1;
        while(end){
            cout << end <<" ";
            end--;
        }
        
    

        i++;
        cout << endl;
    }

    return 0;
}