#include<iostream>
#include <cstdint>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    

    while (n!=0)
    {

        int rem = n % 10;
        if( (ans > INT_MAX / 10) || ( ans < INTMAX_MIN / 10 ) ){ // exceptional case when ans * 10 is greater/smaller than integer range
            ans = 0;
            break;
        }
        ans = (ans * 10) + rem;
        n = n / 10;

    }

    cout << ans << endl;
    

    return 0;
}