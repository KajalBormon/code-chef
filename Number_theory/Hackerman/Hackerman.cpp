#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int GCD(int a, int b) {
    if(b == 0) return a; 
    return GCD(b, a % b); 
}

int main() {
    int t; 
    cin >> t; 

    while(t--) {
        int a, b; 
        cin >> a >> b; 

        int sum = a + b; 
        int n = ceil(sum / 2); 
        bool prime = true; 

        for(int i = 2; i <= n; i++) {
            if(sum == 2) {
                break; 
            } else if(sum % i == 0) {
                prime = false; 
                break; 
            } 
        }

        if(prime) {
            cout << "Alice" << endl; 
        } else {
            cout << "Bob" << endl;
        }
    }

    return 0; 
}