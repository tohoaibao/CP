/**
 * File              : sol1.cpp
 * Author            : Bao To Hoai
 * Date              : 06.11.2020 14:48:30 UTC+7
 * Last Modified Date: 06.11.2020 15:01:15 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

// TLE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<pair<int, int>> A(t);
    int L = 1e9, R = 1;
    for (auto &a : A) {
        cin >> a.first >> a.second;
        if (a.first < L) L = a.first;
        if (a.second > R) R = a.second;
    }
    vector<bool> isPrime(R - L + 1, true);
    for (ll i = 2; i * i <= R; i++) {
        for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) {
            isPrime[j - L] = false;
        }
    }
    if (1 >= L) {
        isPrime[1 - L] = false;
    }
    for (auto &a : A) {
        for (ll x = a.first; x <= a.second; x++) {
            if (isPrime[x - L]) {
                cout << x << '\n';
            }
        }
        cout << '\n';
    }
    return 0;
}

