#include<iostream>
using namespace std;

void linearSearch(int arr[], int n, int num){
    int ans = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            ans = i;
            break;
        }
    }

    cout << "Number is present at index : " << ans << endl;
}

int main(){

    int n;
    cout << "Enter size of an array : ";
    cin >> n;

    int num;
    cout << "Enter num to search in an array : ";
    cin >> num;

    int arr[n];
    cout << "Enter elements of an array : ";
    for(int i = 0; i < n; i++){
        
        cin >> arr[i];
    }

    linearSearch(arr,n, num);

    return 0;
}