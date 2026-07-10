#include<iostream>
using namespace std; 

int main(){
    string str; 
    int T; 
    cin >> T; 

    while(T--){
        cin >> str; 
        int n = str.length(); 
        int count = 0; 

        for(int i = 0; i < n; i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                count++;
                break;
            }
        }

        for(int i = 1; i < n - 1; i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                count++;
                break;
            }
        }

        for(int i = 1; i < n - 1; i++){
            if(str[i] >= '0' && str[i] <= '9'){
                count++;
                break;
            }
        }

        for(int i = 1; i < n - 1; i++){
            if(str[i] == '@' || str[i] == '#' || str[i] == '%' || str[i] == '&' || str[i] == '?'){
                count++;
                break;
            }
        }

        if(count == 4 && n >= 10){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0; 
}