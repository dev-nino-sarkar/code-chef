#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        long long a, b, c;

        cin >> a >> b >> c;

        if((a + b) > 2LL * c) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

}
