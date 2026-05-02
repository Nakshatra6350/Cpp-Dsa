#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first = 0;
    int second = 1;

    cout << first << " ";
    cout << second << " ";
    
    for(int i = 3; i <= n; i++){
        int nextNum = first + second;
        cout << nextNum <<" ";
        first = second;
        second = nextNum;
    }

    return 0;
}