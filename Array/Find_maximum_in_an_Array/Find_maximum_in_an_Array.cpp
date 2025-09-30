#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main() {
	// your code goes here
    int t; 
    cin >> t;

    while(t--){
        int N; 
        cin >> N;

        long long height, maxHeight = 0; 

        for(int i = 0; i < N; i++){
            cin >> height; 
            if(height > maxHeight) maxHeight = height; 
        }

        cout << maxHeight << endl;  
    }
    return 0;
}
