/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 18.02.2021 10:47:13 UTC+7
 * Last Modified Date: 18.02.2021 10:50:35 UTC+7
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
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x * A[i];
    }
    cout << (sum == 0 ? "Yes" : "No") << '\n';
    return 0;
}

