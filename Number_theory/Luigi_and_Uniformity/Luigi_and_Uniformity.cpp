// #pragma clang diagnostic push
// #pragma clang diagnostic ignored "-Wc++11-extensions"
#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <vector>
#include <map>
using namespace std; 

int GCD(int a, int b){
    if(b == 0) return a; 
    return GCD(b, a % b);
}

int main() {
    int t;
    cin >> t; 

    while(t--){
        int i,n, x;
        vector<int>v;  
        vector<int>newV;
        map<int, int>m; 
        cin >> n; 

        for(i = 0; i < n; i++){
            cin >> x; 
            v.push_back(x);
        }

        int g = v[0];
        for(int k = 1; k < n; k++){
            g = GCD(g, v[k]);
        }
        
        int count = 0;
        for(i = 0; i < n; i++){
            if(v[i] != g) {
                if(v[i] % g == 0){
                    count++;
                }
            }
        }

        cout << count << endl;
    }
    return 0; 
}
// #pragma clang diagnostic pop