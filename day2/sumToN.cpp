#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    int ans = 0;
    while(i <= n){
        ans+=i;
        i++;
    }

    cout << ans << endl;

    return 0;
}