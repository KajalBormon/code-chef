#include<iostream>
#include<string>
#include<cctype>
#include<sstream>
using namespace std; 

int main() {
    int n;

    cin >> n; 
    cin.ignore();

    for(int i = 0; i < n; i++) {
        string sentence;
        getline(cin, sentence); 

        stringstream ss(sentence);  
        string word;

        while(ss >> word) {
            bool allCapital = true; 
            for(char c : word){
                if(islower(c)){
                    allCapital = false; 
                    break;
                }
            }

            if(!allCapital) {
                word[0] = toupper(word[0]);
                for(int j = 1; j < (int)word.size(); j++){
                    word[j] = tolower(word[j]);
                }
            }

            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}