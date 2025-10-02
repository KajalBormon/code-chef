#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        // your code goes here
        bool found = true;
        for(int j = 0; j < n - 1; j++){
            if(d[j] > d[j + 1]) {
                found = false;
                break;                
            }
        }
        if(found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
