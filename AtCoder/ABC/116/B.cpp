/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 23.02.2021 15:11:11 UTC+7
 * Last Modified Date: 23.02.2021 15:18:01 UTC+7
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
    int s;
    cin >> s;
    unordered_set<int> st;
    int ans = 1;
    while (st.find(s) == st.end()) {
        ans++;
        st.insert(s);
        if (s % 2 == 0) {
            s = s/2;
        } else {
            s = 3*s + 1;
        }
    }
    cout << ans << '\n';
    
    return 0;
}

