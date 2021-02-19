/**
 * File              : A1.cpp
 * Author            : Bao To Hoai
 * Date              : 17.02.2021 17:01:15 UTC+7
 * Last Modified Date: 17.02.2021 17:11:08 UTC+7
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
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 0) {
        cout << ((a > b) ? "Takahashi" : "Aoki") << '\n';
    } else {
        cout << ((a >= b) ? "Takahashi" : "Aoki") << '\n';
    }
    return 0;
}

