/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 18.02.2021 09:57:57 UTC+7
 * Last Modified Date: 18.02.2021 09:59:39 UTC+7
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
    assert(sz(s) == 3);
    cout << (s[0] == s[1] && s[1] == s[2] ? "Won" : "Lost") << '\n';
    return 0;
}

