/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 22.02.2021 16:46:02 UTC+7
 * Last Modified Date: 22.02.2021 16:46:34 UTC+7
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
    cout << min(c, b/a) << '\n';
    return 0;
}

