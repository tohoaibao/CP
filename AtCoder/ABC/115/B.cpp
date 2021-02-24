/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 23.02.2021 17:06:58 UTC+7
 * Last Modified Date: 23.02.2021 17:08:31 UTC+7
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
    int ans = 0;
    for (int &a : A) {
        cin >> a;
        ans += a;
    }
    ans -= *max_element(all(A))/2;
    cout << ans << '\n';
    return 0;
}

