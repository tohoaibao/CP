/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 05.11.2020 16:33:25 UTC+7
 * Last Modified Date: 05.11.2020 16:59:22 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

// WA
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n);
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            adj[y].push_back(x);
        }
        // topology sort
        vector<int> indegree(n);
        for (int i = 0; i < n; i++) {
            for (int child : adj[i]) indegree[child]++;
        }
        set<int> s;
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) s.insert(i);
        }
        int cnt = 0, rank = 1;
        vector<pair<int, int>> ans;
        while (!s.empty()) {
            int x = *s.begin();
            s.erase(s.begin());
            ans.emplace_back(rank++, x);
            for (int child : adj[x]) {
                if (--indegree[child] == 0) s.insert(child);
            }
            cnt++;
        }
        assert(cnt == n);
        for (int i = 0; i < sz(ans); i++) {
            cout << ans[i].first << " " << ans[i].second << '\n';
        }
    }
    return 0;
}

