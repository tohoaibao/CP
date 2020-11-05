/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 05.11.2020 08:02:51 UTC+7
 * Last Modified Date: 05.11.2020 08:06:10 UTC+7
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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> a(26);
    for (int i = 0; i < 26; i++) {
        a[i] = i;
    }
    while (m--) {
        char c1, c2;
        cin >> c1 >> c2;
        int x = c1 - 'a';
        int y = c2 - 'a';
        for (int i = 0; i < 26; i++) {
            if (a[i] == x) a[i] = y;
            else if (a[i] == y) a[i] = x;
        }
    }
    string ans;
    for (int i = 0; i < n; i++) {
        ans += char(a[s[i] - 'a'] + 'a');
    }
    cout << ans << '\n';
    return 0;
}

