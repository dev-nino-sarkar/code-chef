#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;

    if (x <= 100) {
        cout << x << endl;
    }
    else if (x <= 1000) {
        cout << x - 25 << endl;
    }
    else if (x <= 5000) {
        cout << x - 100 << endl;
    }
    else {
        cout << x - 500 << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
