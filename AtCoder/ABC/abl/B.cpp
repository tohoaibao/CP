/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 16:37:34 UTC+7
 * Last Modified Date: 19.02.2021 17:04:44 UTC+7
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
    int64_t a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > c && b > d) {
        swap(a, c);
        swap(b, d);
    }
    if (a < b && b < c && c < d) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
    return 0;
}

