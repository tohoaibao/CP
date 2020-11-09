/**
 * File              : sol3.cpp
 * Author            : Bao To Hoai
 * Date              : 06.11.2020 15:27:16 UTC+7
 * Last Modified Date: 06.11.2020 15:31:38 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return n > 1;
}

// AC
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int low, high;
        cin >> low >> high;
        for (int i = low; i <= high; i++) {
            if (isPrime(i)) cout << i << '\n';
        }
        cout << '\n';
    }
    return 0;
}

