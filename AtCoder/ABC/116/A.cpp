/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 23.02.2021 14:58:19 UTC+7
 * Last Modified Date: 23.02.2021 14:59:30 UTC+7
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
    vector<int> A(3);
    for (int &a : A) cin >> a;
    sort(all(A));
    cout << (A[0] * A[1]) / 2 << '\n';
    return 0;
}

