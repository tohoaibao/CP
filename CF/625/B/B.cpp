/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 09.11.2020 15:27:09 UTC+7
 * Last Modified Date: 09.11.2020 15:59:07 UTC+7
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
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    auto it = s1.find(s2);
    while (it != string::npos) {
        it = s1.find(s2, it + sz(s2));
        ans++;
    }
    cout << ans << '\n';
    return 0;
}

