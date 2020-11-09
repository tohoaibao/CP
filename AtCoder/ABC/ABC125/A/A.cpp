/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 28.10.2020 19:00:36
 * Last Modified Date: 28.10.2020 19:03:29
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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int t = 1; t * a <= c; t++) {
        ans += b;
    }
    cout << ans << '\n';
    return 0;
}

