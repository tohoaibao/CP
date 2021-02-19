/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 18.02.2021 10:39:43 UTC+7
 * Last Modified Date: 18.02.2021 10:40:38 UTC+7
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
    int x, y;
    cin >> x >> y;
    assert(x != y);
    cout << (abs(x - y) < 3 ? "Yes" : "No") << '\n';
    return 0;
}

