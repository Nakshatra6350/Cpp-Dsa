#include<iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    int i = 1;

    while(i <= n){ // if i is 0 then use i < n
        int j = 1;
        while (j <= n)
        {
            /* code */
            cout<< "*";
            j++;
        }

        i++;
        cout << endl;
        
    }

    return 0;
}