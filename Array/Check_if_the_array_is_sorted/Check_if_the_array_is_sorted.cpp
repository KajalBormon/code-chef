#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        // write your code here
        int n = nums.size();
        int count = 0; 
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1; 
    }
};

int main() {
    int n;
    cin >> n;
    vector<int>v;

    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        v.push_back(x);
    }

    Solution sol;
    int result = sol.check(v);

    if(result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}