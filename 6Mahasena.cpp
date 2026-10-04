#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int luckyCount = 0;
    int unluckyCount = 0;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if(a % 2 == 0) {
            luckyCount++;
        } else {
            unluckyCount++;
        }
    }

    if(luckyCount > unluckyCount) {
        cout << "READY FOR BATTLE" << endl;
    }
    else {
        cout << "NOT READY" << endl;
    }

    return 0;
}
