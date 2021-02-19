/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 17.02.2021 16:14:01 UTC+7
 * Last Modified Date: 17.02.2021 16:21:59 UTC+7
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
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    float x = (float) d / v;
    if (x >= t && x <= s) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
    return 0;
}

