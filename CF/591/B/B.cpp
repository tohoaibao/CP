/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 04.11.2020 16:39:40 UTC+7
 * Last Modified Date: 04.11.2020 16:46:37 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

// TLE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i = 0; i < m; i++) {
        char x, y;
        cin >> x >> y;
        for (int j = 0; j < n; j++) {
            if (s[j] == x) {
                s[j] = y;
            } else if (s[j] == y) {
                s[j] = x;
            }
        }
    }
    cout << s << "\n";
    return 0;
}

