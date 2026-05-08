#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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


bool checkPallindrome(string str){
    int length = str.length();
    int i = 0;
    int j = length - 1 ;
    bool isPallindrome = true;
    while(i <= j){

        if(str[i] != str[j]){
            isPallindrome = false;
            break;
        }

        i++;
        j--;
    }


    return isPallindrome;


}

void solve(string str){
    string temp = "";
    int i = 0;
    while(i < str.length()){
        if(!canSkip(str[i])){
            temp.push_back(toLowerCase(str[i])); // temp += toLowerCase(str[i]);
        }
        i++;
    }

    cout << "Output: " << temp << endl;
    cout << "Valid: " << checkPallindrome(temp) << endl;
}


int main(){


    string str = "My name is Nakshatra";


    solve(str);

    string str2 = "A man, a plan, a canal: Panama";

    solve(str2);

    string str3 = " , ";

    solve(str3);

    return 0;
}