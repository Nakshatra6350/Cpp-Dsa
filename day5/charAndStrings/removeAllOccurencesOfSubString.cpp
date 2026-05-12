#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int getLength(char name[]){

    int count  = 0;

    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    }else{
        // 'B' - 'A' = 1 + 'a' = 'b';
        char temp = ch - 'A' + 'a'; // or we can use ch - 32 (97-65 = 32)
        return temp;
    }
}

bool canSkip(char ch){
    return !((ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z') ||
           (ch >= '0' && ch <= '9'));

}

void solve(string str, string part){
    

    // bool found = true;
    
    // while (found) {
    //     found = false;
    //     for (int i = 0; i <= (int)str.length() - (int)part.length(); i++) {
    //         bool isPartPresentWhole = true;
            
    //         // Check if part matches at position i
    //         for (int j = 0; j < part.length(); j++) {
    //             if (str[i + j] != part[j]) {
    //                 isPartPresentWhole = false;
    //                 break;
    //             }
    //         }
            
    //         // If full match found, erase it and restart
    //         if (isPartPresentWhole) {
    //             str.erase(i, part.length());
    //             found = true;
    //             break;
    //         }
    //     }
    // }

    // cout << str << " ";


    while(str.length() != 0 && str.find(part) < str.length()){
        str.erase(str.find(part), part.length());
    }

    cout << str;
}

int main(){


    string str = "daabcbaabcbc";
    string part = "abc";
    solve(str, part);

    return 0;
}