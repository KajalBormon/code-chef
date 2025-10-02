#include <iostream>
#include <algorithm>
using namespace std; 

int main()
{
    int t; 
    cin >> t; 

    while (t--)
    {
        int n, k; 

        cin >> n >> k; 
        int result = n / k;
        cout << result * result << endl;
    }
    
    return 0;
}