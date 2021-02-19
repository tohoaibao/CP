/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 08:38:38 UTC+7
 * Last Modified Date: 19.02.2021 08:41:43 UTC+7
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
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    int ans = x;
    for (char c : s) {
        if (c == 'o') ans++;
        else if (c == 'x') {
            ans--;
            if (ans < 0) ans = 0;
        } else assert(false);
    }
    cout << ans << '\n';
    return 0;
}

