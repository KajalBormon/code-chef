#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

int main() 
{
    int t, x; 
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cin >> x;
        int value = ((x + 5) / 10) * 10;
        int change = 100 - value; 
        cout << change << endl; 
    }   
}