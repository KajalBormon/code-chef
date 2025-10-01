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
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];            
        }
        // your code goes here
        int minValue = *min_element(a, a + n);
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(minValue < a[j]) {
                count++;
            }
        }
        cout << count << endl;
    }
}
