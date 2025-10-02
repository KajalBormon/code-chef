#include <iostream>
#include <algorithm>
using namespace std; 

int main(){
    int t; 
    cin >> t; 

    while(t--) {
        double A, B; 
        cin >> A >> B; 
        const double ESP = 1e-9; 

        double first_after_discount = 100 - ((A / 100) * 100);
        double second_after_discount = 200 - ((B / 100) * 200);

        if(fabs(first_after_discount - second_after_discount) < ESP) {
            cout << "BOTH" << endl; 
        } else if(first_after_discount < second_after_discount) {
            cout << "FIRST" << endl; 
        } else {
            cout << "SECOND" << endl;
        }
    }

    return 0;
}