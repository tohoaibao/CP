/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 05.11.2020 10:06:22 UTC+7
 * Last Modified Date: 05.11.2020 13:20:42 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int n, m;
const int MAX = 1e4;
vector<vector<int>> adj(MAX);

void top_sort() {
    vector<int> in_degree(n, 0);
    for (int i = 0; i < n; i++) {
        for (int child : adj[i]) {
            in_degree[child]++;
        }
    }
    set<int> st;
    for (int i = 0; i < n; i++) {
        if (in_degree[i] == 0) st.insert(i);
    }

    int cnt = 0;
    vector<int> ans;
    while (!st.empty()) {
        auto first = st.begin();
        st.erase(first);
        int x = *first;
        ans.push_back(x + 1);
        for (int child : adj[x]) {
            if (--in_degree[child] == 0) st.insert(child);
        }
        cnt++;
    }
    if (cnt != n) {
        cout << "Sandro fails.\n";
        return;
    }
    for (int i = 0; i < sz(ans); i++) {
        cout << ans[i] << " \n"[i == sz(ans) - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        adj[x].push_back(y);
    }
    top_sort();
    return 0;
}

