/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 23.02.2021 14:15:34 UTC+7
 * Last Modified Date: 23.02.2021 14:22:14 UTC+7
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
    int n, m;
    cin >> n >> m;
    vector<int> A(m);
    for (int &a : A) cin >> a;
    if (n >= m) {
        cout << "0\n";
        exit(0);
    }
    sort(all(A));
    vector<int> B;
    for (int i = 0; i < m - 1; i++) {
        B.push_back(A[i + 1] - A[i]);
    }
    sort(B.rbegin(), B.rend());
    int64_t ans = 0;
    int r = m - n;
    while (r--) {
        ans += B.back();
        B.pop_back();
    }
    cout << ans << '\n';

    return 0;
}

