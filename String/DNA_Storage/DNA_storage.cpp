#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // your code goes here
        for(int i = 0; i < n; i+=2) {
            string sub = s.substr(i ,2);
            if(sub == "00"){
                cout << 'A';
            } else if(sub == "01") {
                cout << 'T';
            } else if(sub == "10") {
                cout << 'C';
            } else if(sub == "11") {
                cout << 'G';
            } 
        }
        cout << endl;
    }
}
