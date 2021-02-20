/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 20.02.2021 21:05:33 UTC+7
 * Last Modified Date: 20.02.2021 21:09:35 UTC+7
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
    int x;
    cin >> x;
    int ans = 0;
    do {
        x++;
        ans++;
    } while (x % 100 != 0);
    cout << ans << '\n';
    return 0;
}

