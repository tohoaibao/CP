/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 10.11.2020 08:11:34 UTC+7
 * Last Modified Date: 10.11.2020 08:39:16 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int n, m, a, b;
vector<vector<int>> g;
vector<bool> vis;
int ans = 0;

// CS
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    g.resize(n);
    vis.resize(n);
    while (m--) {
        cin >> a >> b;
        --a, --b;
        g[a].push_back(b);
    }
    for (int i = 0; i < n; i++) {
        if (!vis[i]) dfs();
    }
    return 0;
}

