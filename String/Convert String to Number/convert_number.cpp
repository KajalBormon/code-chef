#include<iostream>
#include<sstream>
using namespace std; 

int main(){
    int T; 
    cin >> T; 
    cin.ignore(); 
    
    while(T--){
        string str; 
        getline(cin, str);
        stringstream ss(str);
        int num; 
        ss >> num; 
        cout << num << endl; 
    }

    return 0; 
}