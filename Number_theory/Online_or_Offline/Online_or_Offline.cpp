#include <iostream>
#include <algorithm>
using namespace std; 

int main()
{
    int t; 
    cin >> t; 

    while(t--){
        double n, m; 
        cin >> n >> m; 

        double online_cost = (n - ((10.0 / 100) * n));

        if(online_cost == m){
            cout << "EITHER" << endl; 
        } else if (online_cost < m) {
            cout << "ONLINE" << endl; 
        } else {
            cout << "DINING" << endl;
        }        
    }

    return 0; 
}