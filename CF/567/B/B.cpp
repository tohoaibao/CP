/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 09.11.2020 08:59:33 UTC+7
 * Last Modified Date: 09.11.2020 09:30:11 UTC+7
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
    int n;
    cin >> n;
    set<int> s;
    int ans = 0;
    while (n--) {
        char ch;
        int r;
        cin >> ch >> r;
        if (ch == '+') {
            s.insert(r);
        } else {
            if (s.find(r) == s.end()) ans++;
            else s.erase(r);
        }
        ans = max(ans, sz(s));
    }
    cout << ans << '\n';
    return 0;
}

