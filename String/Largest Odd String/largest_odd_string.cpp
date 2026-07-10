#include<iostream>
using namespace std; 

int main(){
    string num; 
    int lastIndex = -1;
    cin >> num; 
    int n = num.length(); 

    for(int i = n - 1; i >= 0; i--){
        if(num[i] == '1' || num[i] == '3' || num[i] == '5' || num[i] == '7' || num[i] == '9'){
            lastIndex = i; 
            break; 
        }
    }

    if(lastIndex != -1){
        for(int i = 0; i <= lastIndex; i++){
            cout << num[i]; 
        }
    } else {
        cout << -1;
    }

    return 0; 
}