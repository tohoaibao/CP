/**
 * File              : sol1.cpp
 * Author            : Bao To Hoai
 * Date              : 10.11.2020 09:59:59 UTC+7
 * Last Modified Date: 10.11.2020 10:19:19 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int n, k;
vector<vector<int>> adj;
vector<bool> vis;
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

vector<int> ans;

void top_sort(int x) {
    vis[x] = true;
    for (int child : adj[x]) {
        if (!vis[child]) top_sort(child);
    }
    ans.push_back(x);
}

// AC1
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> k;
    adj.resize(n + 1);
    vis.resize(n + 1, false);
    for (int i = 1; i <= k; i++) {
        int w;
        cin >> w;
        while (w--) {
            int x;
            cin >> x;
            adj[i].push_back(x);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) top_sort(i);
    }
    dbg(ans);
    int pos = 0;
    vector<int> p(n + 1);
    for (int i = n - 1; i >= 0; i--) {
        int t = ans[i];
        p[t] = pos;
        pos = t;
    }
    for (int i = 1; i <= n; i++) {
        cout << p[i] << "\n";
    }
    return 0;
}

