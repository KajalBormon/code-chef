#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std; 

int GCD(int a, int b){
    if(b == 0) return a; 
    return GCD(b, a % b);
}

int main() {
    int t; 
    cin >> t; 

    while(t--){
        int n,m; 
        cin >> n >> m;
        int result = GCD(n, m);
        cout << result << endl;
    }

    return 0; 
}