#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main() 
{
    int t, arr[100];
    cin >> t; 

    while(t--) {
        int even = 0, odd = 0; 

        for(int i = 0; i < 3; i++) {            
            cin >> arr[i];
            if((arr[i] % 2) == 0){
                even++;
            } else {
                odd++;
            }
        }

        if(even && odd) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0; 
}