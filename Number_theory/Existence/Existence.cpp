#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    
    while(t--) {
        long long x, y; 
        cin >> x >> y;

        if(x * x == 2 * y) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl;
        }
    }

    return 0; 
}