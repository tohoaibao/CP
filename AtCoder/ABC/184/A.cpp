/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 08:33:51 UTC+7
 * Last Modified Date: 19.02.2021 08:34:25 UTC+7
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << a * d - b * c << '\n';
    return 0;
}

