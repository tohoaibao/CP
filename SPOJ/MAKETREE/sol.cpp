/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 10.11.2020 09:19:46 UTC+7
 * Last Modified Date: 10.11.2020 10:41:31 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

string to_string(char c) {
    return string(1, c);
}

string to_string(string s) {
    return s;
}

template<class A, class B> string to_string(pair<A, B> p) {
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template<class T> string to_string(T v) {
    bool f = true;
    string res = "{";
    for (auto &x : v) {
        if (!f) {
            res += ", ";
        }
        f = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

void DBG() {
    cerr << "]" << endl;
}

template<class H, class... T> void DBG(H h, T... t) {
    cerr << to_string(h);
    if(sizeof...(t))
        cerr << ", ";
    DBG(t...);
}

#ifdef LOCAL
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 42
#endif

// AC2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<vector<int>> adj(n);
    vector<int> indegree(n);
    for (int i = 0; i < k; i++) {
        int w;
        cin >> w;
        while (w--) {
            int x;
            cin >> x;
            --x;
            adj[i].push_back(x);
            indegree[x]++;
        }
    }
    priority_queue<int> q;
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) q.push(i);
    }
    int cnt = 0;
    vector<int> ans1;
    while (!q.empty()) {
        int x = q.top();
        q.pop();
        ans1.push_back(x);
        for (int child : adj[x]) {
            if (--indegree[child] == 0) q.push(child);
        }
        cnt++;
    }
    assert(cnt == n);
    dbg(ans1);
    vector<int> ans2(n);
    int pos = 0;
    for (int a : ans1) {
        ans2[a] = pos;
        pos = a + 1;
    }
    for (int a : ans2) {
        cout << a << '\n';
    }
    return 0;
}

