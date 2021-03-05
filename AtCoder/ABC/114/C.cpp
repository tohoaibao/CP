/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 08:50:43 UTC+7
 * Last Modified Date: 25.02.2021 09:25:19 UTC+7
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
    int64_t ans = 0;
    std::function<void(int64_t,int, int, int)> dfs;
    dfs = [&](int64_t x, int a, int b, int c) {
        if (x > n) return;
        if (a && b && c) ans++;
        dfs(x * 10 + 3, 1, b, c);
        dfs(x * 10 + 5, a, 1, c);
        dfs(x * 10 + 7, a, b, 1);
    };
    dfs(0, 0, 0, 0);
    cout << ans << '\n';

    return 0;
}

