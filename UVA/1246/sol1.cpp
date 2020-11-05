/**
 * File              : sol1.cpp
 * Author            : Bao To Hoai
 * Date              : 05.11.2020 10:55:03 UTC+7
 * Last Modified Date: 05.11.2020 16:10:59 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int n, m;
const int MAX = 100;
vector<vector<int>> adj(MAX);

void top_sort() {
    vector<int> in_degree(n, 0);
    for (int i = 0; i < n; i++) {
        for (int child : adj[i]) {
            in_degree[child]++;
        }
    }

    multiset<int> s;
    for (int i = 0; i < n; i++) {
        if (in_degree[i] == 0) s.insert(i);
    }
    int cnt = 0;
    vector<int> ans;
    while (!s.empty()) {
        int x = *s.begin();
        s.erase(s.begin());
        ans.push_back(x + 1);
        for (int child : adj[x]) {
            if (--in_degree[child] == 0) s.insert(child);
        }
        cnt++;
    }
    if (cnt != n) return;
    for (int i = 0; i < sz(ans); i++) {
        cout << ans[i] << " \n"[i == sz(ans) - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        adj.clear();
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            --x, --y;
            adj[x].push_back(y);
        }
        top_sort();
    }
    return 0;
}

