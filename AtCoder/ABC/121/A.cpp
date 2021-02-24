/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 22.02.2021 15:31:06 UTC+7
 * Last Modified Date: 22.02.2021 15:32:00 UTC+7
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
    int m, n, h, w;
    cin >> m >> n >> h >> w;
    cout << (m - h) * (n - w) << '\n';
    return 0;
}

