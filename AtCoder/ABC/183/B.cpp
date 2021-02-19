/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 09:37:56 UTC+7
 * Last Modified Date: 19.02.2021 09:41:59 UTC+7
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
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double ans = (b * c + d * a) / (b + d);
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}

