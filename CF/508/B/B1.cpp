/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 10.11.2020 15:48:42 UTC+7
 * Last Modified Date: 10.11.2020 15:53:07 UTC+7
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
    int n = sz(s);
    assert((s[n - 1] - '0') % 2 == 1);
    int idx = -1;
    for (int i = 0; i < n; i++) {
        if ((s[i] - '0') % 2 == 0) {
            idx = i;
            if (s[i] < s[n - 1]) break;
        }
    }
    if (idx == -1) {
        cout << "-1\n";
    } else {
        swap(s[idx], s[n - 1]);
        cout << s << '\n';
    }
    return 0;
}

