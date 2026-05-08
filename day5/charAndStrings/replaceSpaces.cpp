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


void checkPallindrome(char str[]){
    int length = getLength(str);
    int i = 0;
    int j = length - 1 ;
    bool isPallindrome = true;
    while(i <= j){
        
        if(canSkip(str[i])){
            i++;
            continue;
        }

        if(canSkip(str[j])){
            j--;
            continue;
        }

        if(toLowerCase(str[i]) != toLowerCase(str[j])){ // for case insensitive tolower(str[i]) != tolower(str[j]) -> in built method
            isPallindrome = false;
            break;
        }

        i++;
        j--;
    }


    cout << isPallindrome << endl;


}


void solve(string str){

    // string temp = "";
    // for(int i = 0; i < str.length(); i++){
    //     if(str[i] == ' '){
    //         temp += "@40";

    //         //temp.push_back('@');
    //         //temp.push_back('4');
    //         //temp.push_back('0');
    //     }else{
    //         temp.push_back(str[i]);
    //     }
    // }


    // cout << temp;

    //approach two

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            str.replace(i, 1, "@40");  // replace 1 char at index i with "@40"
            i += 2;                     // skip the newly inserted chars
        }
    }
    cout << str;
}

int main(){


    string str = "My name is naksh";

    solve(str);

    return 0;
}