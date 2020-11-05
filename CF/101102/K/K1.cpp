/**
 * File              : K1.cpp
 * Author            : Bao To Hoai
 * Date              : 05.11.2020 14:35:38 UTC+7
 * Last Modified Date: 05.11.2020 15:19:56 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

const int MAX = 1e5;
int t, n, m, a, b;
vector<set<int>> adj(MAX);
bool vis[MAX];
vector<int> ans;

void top_sort(int x) {
    vis[x] = true;
    for (int child : adj[x]) {
        if (!vis[child]) top_sort(child);
    }
    ans.insert(ans.begin(), x + 1);
}

// MLE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n >> m;
        adj.clear();
        ans.clear();
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                adj[i].insert(j);
            }
        }
        for (int i = 0; i < m; i++) {
            cin >> a >> b;
            --a, --b;
            adj[a].erase(b);
        }
        // Topology sort
        for (int i = 0; i < n; i++) {
            if (!vis[i]) top_sort(i);
        }
        for (int i = 0; i < sz(ans); i++) {
            cout << ans[i] << " \n"[i == sz(ans) - 1];
        }
    }
    return 0;
}

