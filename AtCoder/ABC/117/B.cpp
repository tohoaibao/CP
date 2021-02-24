/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 23.02.2021 13:49:44 UTC+7
 * Last Modified Date: 23.02.2021 13:51:28 UTC+7
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
    for (int &a : A) cin >> a;
    sort(all(A));
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += A[i];
    }
    cout << (sum > A[n - 1] ? "Yes" : "No") << '\n';
    return 0;
}

