#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int x, y;
    
    cin >> t;
    
    while(t--) {
        cin >> x >> y;
        
        if (y * 2 >= x) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }
    
    return 0;
}
