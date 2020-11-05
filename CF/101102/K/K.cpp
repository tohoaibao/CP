/**
 * File              : K.cpp
 * Author            : Bao To Hoai
 * Date              : 05.11.2020 13:25:41 UTC+7
 * Last Modified Date: 05.11.2020 15:25:51 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

// MLE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<set<int>> adj(n);
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                adj[i].insert(j);
            }
        }
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            --a, --b;
            adj[a].erase(b);
        }

        // Topology sort
        vector<int> in_degree(n, 0);
        for (int i = 0; i < n; i++) {
            for (int child : adj[i]) {
                in_degree[child]++;
            }
        }
        priority_queue<int> q;
        for (int i = 0; i < n; i++) {
            if (in_degree[i] == 0) q.push(i);
        }
        int cnt = 0;
        vector<int> ans;
        while (!q.empty()) {
            int x = q.top();
            q.pop();
            ans.push_back(x + 1);
            for (int child : adj[x]) {
                if (--in_degree[child] == 0) q.push(child);
            }
            cnt++;
        }
        if (cnt != n) assert(false);
        for (int i = 0; i < sz(ans); i++) {
            cout << ans[i] << " \n"[i == sz(ans) - 1];
        }
    }
    return 0;
}

