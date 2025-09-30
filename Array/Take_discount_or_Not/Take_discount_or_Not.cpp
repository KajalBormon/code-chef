#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];        
        int original_price = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            original_price += a[i];
        }
        
        // your code goes here
        int b[n];
        int total_item_price = 0;

        for(int j = 0; j < n; j++) {
            b[j] = a[j] - y;
            if(b[j] < 0) {
                b[j] = 0;
            }
            total_item_price += b[j];            
        }

        if((x + total_item_price) < original_price) {
            cout << "COUPON" << endl;
        } else {
            cout << "NO COUPON" << endl;
        }
    }
}
