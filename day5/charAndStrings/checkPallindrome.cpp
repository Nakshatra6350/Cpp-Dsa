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


int main(){


    char ch[10];

    cin>> ch;

    cout << ch << endl;

    checkPallindrome(ch);

    return 0;
}