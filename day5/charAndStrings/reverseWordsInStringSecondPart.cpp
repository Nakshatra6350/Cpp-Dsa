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


void solve(char arr[]){

    // approach one
    // int index = 0;
    // int n = getLength(arr);

    // while(index < n){
    //     int start = index;
    //     int end = index;
    //     int j = index; // reset j to start from next word

    //     while(arr[j] != ' ' && arr[j] != '\0'){
    //         end = j;
    //         j++;
    //     }

    //     while(start < end){
    //         swap(arr[start], arr[end]);
    //         start++;                   
    //         end--;
    //     }


    //     index = j + 1;

        
    // }

    // cout << arr;


    // approach two
    int i = 0;
    
    while(arr[i] != '\0'){
        // find word start and end
        int start = i;
        while(arr[i] != ' ' && arr[i] != '\0') i++;
        int end = i - 1;

        // reverse the word in place
        while(start < end){
            swap(arr[start++], arr[end--]);
        }

        // skip the space, to go the next word
        if(arr[i] == ' ') i++;
    }

    cout << arr;
}

int main(){


    char arr[] = "the sky is blue";

    solve(arr);

    return 0;
}