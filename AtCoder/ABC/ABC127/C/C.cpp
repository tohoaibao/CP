/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 27.10.2020 10:13:26
 * Last Modified Date: 27.10.2020 10:32:16
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define forn(i, a, b) for (int i = (a); i < (b); ++i)

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

// TLE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<unordered_set<int>> A(m);
    for (int i = 0; i < m; i++) {
        int l, r;
        unordered_set<int> set;
        cin >> l >> r;
        for (int j = l; j <= r; j++) {
            set.insert(j);
        }
        A[i] = set;
    }
    int ans = 0;
    for (int id = 1; id <= n; id++) {
        bool flag = true;
        for (int i = 0; i < m; i++) {
            if (A[i].find(id) == A[i].end()) {
                flag = false;
                break;
            }
        }
        if (flag) ans++;
    }
    cout << ans << '\n';
    return 0;
}

