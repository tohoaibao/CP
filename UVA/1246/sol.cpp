/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 05.11.2020 10:39:49 UTC+7
 * Last Modified Date: 05.11.2020 15:37:38 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int n, m;
const int MAX = 100;
bool vis[MAX];
vector<vector<int>> adj(MAX);
vector<int> ans;

void top_sort(int x) {
    vis[x] = true;
    for (int child : adj[x]) {
        if (!vis[child]) top_sort(child);
    }
    ans.push_back(x + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        adj.clear();
        ans.clear();
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            --x, --y;
            adj[x].push_back(y);
        }
        for (int i = 0; i < n; i++) {
            if (!vis[i]) top_sort(i);
        }
        for (int i = sz(ans) - 1; i >= 0; i--) {
            cout << ans[i] << " \n"[i == 0];
        }
    }
    return 0;
}

