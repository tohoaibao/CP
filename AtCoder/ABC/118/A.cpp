/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 23.02.2021 11:01:35 UTC+7
 * Last Modified Date: 23.02.2021 11:02:12 UTC+7
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
    int a, b;
    cin >> a >> b;
    if (b % a == 0) {
        cout << a + b << '\n';
    } else {
        cout << b - a << '\n';
    }
    return 0;
}

