/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 23.02.2021 08:27:37 UTC+7
 * Last Modified Date: 23.02.2021 08:28:39 UTC+7
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
    int cnt = 0;
    for (char c : s) {
        if (c == '0') cnt++;
    }
    cout << 2 * min(cnt, sz(s) - cnt) << '\n';
    return 0;
}

