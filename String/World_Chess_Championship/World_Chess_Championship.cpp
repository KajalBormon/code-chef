#include <iostream>
#include<string>
#include<sstream>
#include<cctype>
using namespace std; 

int main() {
    int t, i, x, y; 

    cin >> t; 

    while(t--) {
        int n;
        cin >> n;

        string s; 
        cin >> s; 

        x = 0;
        y = 0; 

        for(i = 0; i < (int)s.size(); i++) {
            if(s[i] == 'C'){
                x++;
            } else if (s[i] == 'N') {
                y++;
            }
        }
        if(x > y) {
            cout << (60 * n) << endl; 
        } else if (x < y) {
            cout << (40 * n) << endl;
        } else {
            cout << (55 * n) << endl; 
        }
    }

    return 0;
}