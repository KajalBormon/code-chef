#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // your code goes here
        set<int>s; 
        for(int k = 0; k < n; k++) {
            s.insert(a[k]);
        }

        auto it = s.end();
        --it;
        int last_value = *it; 

        --it;
        int second_last = *it; 

        int result = last_value + second_last;
        cout << result << endl; 
    }
}
