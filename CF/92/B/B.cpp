/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 09.11.2020 16:14:37 UTC+7
 * Last Modified Date: 09.11.2020 16:40:53 UTC+7
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
    int ans = 0;
    while (sz(s) > 1) {
        if (s.back() == '0') {
            // even
            s.pop_back();
        } else {
            // old
            int i = sz(s) - 1;
            while (i >= 0 && s[i] == '1') {
                s[i] = '0';
                i--;
            }
            if (i == -1) s = "1" + s;
            else s[i] = '1';
        }
        ans++;
    }
    cout << ans << '\n';
    return 0;
}

