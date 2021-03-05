/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 08:18:55 UTC+7
 * Last Modified Date: 25.02.2021 08:30:19 UTC+7
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
    int ans = 999;
    for (int i = 0; i <= sz(s) - 3; i++) {
        int n = std::stoi(s.substr(i, 3));
        int diff = abs(753 - n);
        ans = min(ans, diff);
    }
    cout << ans << '\n';
    return 0;
}

