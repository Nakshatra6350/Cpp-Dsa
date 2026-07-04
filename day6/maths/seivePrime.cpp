#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

void solve(int n){
    int count = 0;
    if(n <= 1){
        cout << count;
        return;
    }

    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i <= n ; i++){
        if(prime[i]){
            count++;
            for(int j = 2 * i; j < n; j = j + i){
                prime[j] = false;
            }
        }
    }

    cout << count;
}

int main() {
    // seive of eratosthenes

    // 1. mark every number as prime number
    // 2. mark those non prime who comes in the table of current number for example 2, then mark non primes to those who comes in table of 2 and so on

    int n;
    cin >> n;

    solve(n);

    return 0;
}