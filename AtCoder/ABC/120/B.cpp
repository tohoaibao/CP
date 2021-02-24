/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 22.02.2021 16:59:28 UTC+7
 * Last Modified Date: 22.02.2021 17:05:11 UTC+7
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
    int a, b, k;
    cin >> a >> b >> k;
    for (int i = 100; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            k--;
        }
        if (k == 0) {
            cout << i << '\n';
            exit(0);
        }
    }
    return 0;
}

