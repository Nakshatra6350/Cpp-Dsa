#include<iostream>
using namespace std;

int main(){
    int a = 123;
    char b = 'c';
    bool c = true;
    float d = 4.3;
    double e = 4.322;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    int size = sizeof(a);
    cout << size << endl;
}