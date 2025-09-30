#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        // your code goes here
        string vowel = "aeiou";
        bool found = false; 

        for(int i = 0; i < (int)s.size(); i++){
            string sub = s.substr(i,3);
            string store = "";

            if ((int)sub.size() > 2) {
                stringstream ss(sub);
                char c; 

                while(ss >> c){
                    if(vowel.find(c) != string::npos) {
                        store+=c;
                        
                        if((int)store.size() > 2){
                            found = true; 
                            break;
                        }
                    }
                }
            } 
        }

        if(found) {
            cout << "Happy" << endl;
        } else {
            cout << "Sad" << endl;
        }
    }
    return 0;
}
