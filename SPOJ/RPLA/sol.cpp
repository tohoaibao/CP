/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 05.11.2020 16:33:25 UTC+7
 * Last Modified Date: 06.11.2020 08:59:35 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

// Better
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    for (int t = 1; t <= tt; t++) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n);
        vector<int> indegree(n);
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            adj[y].push_back(x);
            indegree[x]++;
        }
        // topology sort
        vector<bool> vis(n);
        priority_queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                q.push({-i, 1});
                vis[i] = true;
            }
        }
        int cnt = 0;
        vector<pair<int, int>> ans;
        while (!q.empty()) {
            auto f = q.top();
            q.pop();
            int x = -f.first;
            ans.push_back({f.second, x});
            for (int child : adj[x]) {
                if (!vis[child]) {
                    if (--indegree[child] == 0) {
                        vis[child] = true;
                        q.push({-child, f.second + 1});
                    }
                }
            }
            cnt++;
        }
        assert(cnt == n);
        cout << "Scenario #" << t << ":\n";
        sort(all(ans));
        for (int i = 0; i < sz(ans); i++) {
            cout << ans[i].first << " " << ans[i].second << '\n';
        }
    }
    return 0;
}

