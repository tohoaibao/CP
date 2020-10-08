/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 08.10.2020 14:05:54
 * Last Modified Date: 08.10.2020 16:53:40
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define EACH(x, a) for (auto& x: a)

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

// https://codeforces.com/contest/129/problem/B
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<set<int>> g(n);
    while (m--) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].insert(b);
        g[b].insert(a);
    }
    int ans = 0;
    while (true) {
        vector<int> v;
        for (int i = 0; i < n; i++) {
            if (g[i].size() == 1) {
                v.push_back(i);
            }
        }
        for (int x : v) {
            g[*g[x].begin()].erase(x);
            g[x].clear();
        }
        if (v.size()) {
            ans++;
        } else break;
    }
    cout << ans << endl;

    return 0;
}

