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

bool checkEqual(int count1[] , int count2[]){
    for(int i = 0; i < 26; i++){
        if(count1[i] != count2[i]){
            return 0;
        }
    }

    return 1;
}

void solve(string str){
    int i = 0; 
    int j = i + 1;

    while (i < str.length() && j < str.length()) {
        if (str[i] == str[j]) {
            string temp = str.substr(i, 2);  
            while (str.length() != 0 && str.find(temp) < str.length()) {
                str.erase(str.find(temp), temp.length());
            }
            i = 0; 
            j = i + 1;
        } else {
            i++;
            j++;
        }
    }

    cout << str;
}

int main(){


    string str = "azxxzy";
    solve(str);

    return 0;
}