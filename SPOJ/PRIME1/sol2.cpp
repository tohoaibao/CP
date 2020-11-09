/**
 * File              : sol2.cpp
 * Author            : Bao To Hoai
 * Date              : 06.11.2020 15:08:18 UTC+7
 * Last Modified Date: 06.11.2020 15:27:09 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

void simpleSieve(int limit, vector<int> &prime) {
    bool mark[limit + 1];
    memset(mark, false, sizeof(mark));
    for (int i = 2; i <= limit; i++) {
        if (!mark[i]) {
            prime.push_back(i);
            for (int j = i; j <= limit; j += i) {
                mark[j] = true;
            }
        }
    }
}

void segmented_sieve(int low, int high) {
    int limit = floor(sqrt(high)) + 1;
    vector<int> prime;
    simpleSieve(limit, prime);
    int n = high - low + 1;
    bool mark[n + 1];
    memset(mark, false, sizeof(mark));
    for (int i = 0; i < sz(prime); i++) {
        int loLim = floor(low / prime[i]) * prime[i];
        if (loLim < low) loLim += prime[i];
        if (loLim == prime[i]) loLim += prime[i];
        for (int j = loLim; j <= high; j += prime[i]) {
            if (j != prime[i]) mark[j - low] = true;
        }
    }
    if (low <= 1) mark[1 - low] = true;
    for (int i = low; i <= high; i++) {
        if (!mark[i - low]) cout << i << "\n";
    }
    cout << "\n";
}

// AC
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        segmented_sieve(l, r);
    }
    return 0;
}

