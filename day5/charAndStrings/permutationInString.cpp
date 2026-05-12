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

void solve(string str, string str2){
    int count1[26] = {0};

    for(int i = 0 ; i < str.length(); i++){
        char ch = str[i];
        int num = num = ch - 'a';
        count1[num]++;
    }

    int i = 0;
    int windowSize = str.length();

    int count2[26] = {0};

    while(i < windowSize && i < str2.length()){
        int index = str2[i] - 'a';
        count2[index]++;
        i++;
    }


    if(checkEqual(count1, count2)){
        cout << "True" << endl;
        return;
    }else{
        while(i < str2.length()){
            char newChar = str2[i];
            int index = newChar - 'a';
            count2[index]++;
            char oldChar = str2[i - windowSize];
            index = oldChar - 'a';
            count2[index]--;

            i++;    

            if(checkEqual(count1, count2)){
                cout << "True" << endl;
                return;
            }
        }
    }

    cout << "False";
}

int main(){


    string str = "ab";
    string str2 = "eidbaoo";
    solve(str, str2);

    return 0;
}