#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

int main() {
    int n, x, y;
    vector<int>v;
    cin >> n >> x; 
    bool found = false;
    for(int i = 0; i < n; i++) {
        cin >> y;
        v.push_back(y);

        if(v[i] == x){
            found = true; 
            break;
        }
    }

    if(found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0; 
}