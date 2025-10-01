#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        // your code goes here
        int total_price = 0;
        for(int k = 0; k < n; k++) {
            if(a[k] >= x) {
                total_price += b[k];
            }
        }    
        cout << total_price << endl;
    }
}
