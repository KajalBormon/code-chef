#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std; 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // write your code here
        map<int , int>m; 
        for(int x : nums) {
            m[x]++; 
        }

        for(auto it : m) {
            if(it.second == 1) {
                return it.first; 
            }
        }
        return -1;
    }
};

int main() 
{
    int n; 
    vector<int>v; 
    cin >> n; 
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x; 
        v.push_back(x); 
    }

    Solution sol; 

    int result = sol.singleNumber(v);
    cout << result << endl;

    return 0; 
}
#pragma clang diagnostic pop