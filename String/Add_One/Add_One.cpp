#include <iostream>
#include <string>
using namespace std;

string addOne(string s) {
    int i = s.size() - 1; 
    while(i >= 0) {
        if(s[i] == '9') {
            s[i] = '0';
            i--;
        } else {
            s[i]+=1;
            return s; 
        }
    }
    return "1" + s;
}

int main() {
    int t; 
    cin >> t; 
    while(t--){
        string s;
        cin >> s;
        cout << addOne(s) << endl;
    }
    return 0;
}
