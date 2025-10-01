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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        // your code goes here
        int count = 0; 
        for(int k = 0; k < n; k++) {
            if(a[k] > b[k]) {
                if((b[k] * 2 >= a[k])) count++;
            } else if(b[k] > a[k]) {
                if(a[k] * 2 >= b[k]) count++;
            } else if (a[k] == b[k]) {
                count++;
            }
        }
        cout << count << endl;         
    }
}
