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

void solve(vector<char> ch){
    // int count[26] = {0};
    // for(int i = 0; i < ch.size(); i++){
    //     int num = ch[i] - 'a';
    //     count[num]++;
    // }

    // vector<char> ans;

    // for(int i = 0; i < 26; i++){
    //     if(count[i] > 0){
    //         if(count[i] >= 10){
    //             int temp = count[i];
    //             vector<int> tempArr;
    //             while(temp){
    //                 int rem = temp%10;
    //                 tempArr.push_back(rem);
    //                 temp = temp/10;
    //             }

    //             reverse(tempArr.begin(), tempArr.end());

    //             ans.push_back(char(i + 'a'));  

    //             for(auto val : tempArr){
    //                 char c = char(val + '0');
    //                 ans.push_back(c);
    //             }

    //         }else if(count[i] == 1){
    //             char ch = i + 'a';
    //             ans.push_back(ch);
    //         }else{
    //             char ch = i + 'a';
    //             ans.push_back(ch);
    //             ans.push_back(char(count[i] + '0'));
    //         }
    //     }
    // }

    // for(auto val : ans){
    //     cout << val << " ";
    // }

    // cout << endl << ans.size();

    int i = 0; 
    int ansIndex = 0;

    int len = ch.size();

    while( i < len ){
        int j = i + 1;
        while(j < len && ch[i] == ch[j]){
            j++;
        }

        ch[ansIndex++] = ch[i];
        int count = j - i;

        if(count > 1){
            string cnt = to_string(count);
            
        }

    }
}

int main(){


    vector<char> ch = {'a', 'a' , 'a' , 'b' , 'b' , 'a' , 'a'};
    solve(ch);

    return 0;
}