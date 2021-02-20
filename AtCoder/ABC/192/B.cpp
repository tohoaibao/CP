/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 20.02.2021 21:13:28 UTC+7
 * Last Modified Date: 20.02.2021 21:17:56 UTC+7
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
    bool f = false;
    for (int i = 0; i < sz(s); i++) {
        if (i % 2 == 0) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                f = true;
                break;
            }
        } else {
            if (s[i] >= 'a' && s[i] <= 'z') {
                f = true;
                break;
            }
        }
    }
    cout << (f ? "No" : "Yes") << '\n';
    return 0;
}

