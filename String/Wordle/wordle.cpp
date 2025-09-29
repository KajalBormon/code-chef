#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
    int n, i; 
    string s, t;
   
    cin >> n;
    for(i = 0; i < n; i++) { 
        cin >> s;
        cin >> t;
        
        string m = ""; //for every time string m empty 

        for(int j = 0; j < 5; j++){
            if(s[j] == t[j]){
                m+='G';
            } else {
                m+='B';
            }
        }
        cout << m << endl; 
    }
}
