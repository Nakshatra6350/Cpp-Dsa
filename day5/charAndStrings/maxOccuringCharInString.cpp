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

    // approach one

    // unordered_map<char,int> mapper;

    // int i = 0;

    // while(i < str.length()){
    //     if(mapper.count(str[i])){
    //         mapper.at(str[i])++;
    //     }else{
    //         mapper[str[i]] = 1;
    //     }

    //     i++;
    // }

    // char ans;
    // int count = 0;
    // for(auto i : mapper){
    //     if(i.second > count){
    //         count = i.second;
    //         ans = i.first;
    //     }
    // }

    // cout << ans << " : " << count << endl;

    //approach two

    // int freq[128] = {0};  // index = ASCII value of char

    // for(char ch : str){
    //     freq[ch]++;       // ch auto-converts to ASCII index
    // }

    // char ans;
    // int count = 0;
    // for(int i = 0; i < 128; i++){
    //     if(freq[i] > count){
    //         count = freq[i];
    //         ans = (char)i;
    //     }
    // }

    // cout << ans << " : " << count << endl;

    // approach three only for characters

    int arr[26] = {0};
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        int num = 0;
        if(ch >= 'a' && ch <= 'z'){
            num = ch - 'a';
        }else{
            num = ch - 'A';
        }

        arr[num]++;
    }

    int maxi = -1;
    int ans = 0;
    for(int i = 0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;

    cout << finalAns << " : " << maxi << endl;

}

int main(){


    string str = "abababaasssaaaaasssssssssssss";

    solve(str);

    return 0;
}