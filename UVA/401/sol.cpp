/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 10.11.2020 13:35:19 UTC+7
 * Last Modified Date: 10.11.2020 13:44:02 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x1l, y1l, x1r, y1r, x2l, y2l, x2r, y2r;
        cin >> x1l >> y1l >> x1r >> y1r;
        cin >> x2l >> y2l >> x2r >> y2r;
        int a = max(x1l, x2l);
        int b = min(x1r, x2r);
        int c = max(y1l, y2l);
        int d = min(y1r, y2r);
        if (i > 0) cout << '\n';
        if (a < b && c < d) {
            cout << a << " " << c << " " << b << " " << d << '\n';
        } else {
            cout << "No Overlap\n";
        }
    }
    return 0;
}

