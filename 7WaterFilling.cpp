#include <bits/stdc++.h>
using namespace std;

void solve() {
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;

    if (b1 + b2 + b3 <= 1) {
        cout << "Water filling time" << endl;
    }
    else {
        cout << "Not now" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
