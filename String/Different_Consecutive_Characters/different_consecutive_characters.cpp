#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
    int i,n,t;
    string s; 

    cin >> t; 
    for(i = 0; i < t; i++){
        cin >> n; 
        cin >> s;
        int count = 0; 

        for(int j = 0; j < n; j++){
            if(s[j] == s[j+1]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
