/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 14:32:58 UTC+7
 * Last Modified Date: 19.02.2021 15:00:21 UTC+7
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
    int64_t n;
    cin >> n;
    set<int64_t> st;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            st.insert(i);
            st.insert(n / i);
        }
    }
    for (auto &a : st) cout << a << '\n';
    return 0;
}

