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

void reverseString(char str[]){
    int length = getLength(str);
    int i = 0;
    int j = length - 1 ;
    while(i <= j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }


    cout << str << endl;


}


int main(){


    char ch[10];

    cin>> ch;

    cout << ch << endl;

    reverseString(ch);

    return 0;
}