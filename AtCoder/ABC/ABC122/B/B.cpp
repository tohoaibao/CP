/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 22.02.2021 14:30:30 UTC+7
 * Last Modified Date: 22.02.2021 14:33:21 UTC+7
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
    string s;
    cin >> s;
    int curr = 0, ans = 0;
    for (int i = 0; i < sz(s); i++) {
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
            curr++;
        } else {
            curr = 0;
        }
        ans = max(ans, curr);
    }
    cout << ans << '\n';
    return 0;
}

