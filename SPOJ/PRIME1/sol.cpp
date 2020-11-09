/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 06.11.2020 14:20:11 UTC+7
 * Last Modified Date: 06.11.2020 14:47:02 UTC+7
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
    int MAXN = 1;
    for (auto &a : A) {
        cin >> a.first >> a.second;
        if (a.second > MAXN) MAXN = a.second;
    }
    
    // generate all prime [2..MAXN]
    vector<bool> isPrime(MAXN + 1);
    for (int i = 2; i <= MAXN; i++) {
        isPrime[i] = true;
    }
    for (int i = 2; i * i <= MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (auto &a : A) {
        for (int i = a.first; i <= a.second; i++) {
            if (isPrime[i]) cout << i << '\n';
        }
        cout << '\n';
    }

    return 0;
}

