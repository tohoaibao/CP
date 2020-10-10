/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 09.10.2020 15:03:15
 * Last Modified Date: 09.10.2020 16:00:07
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

// Wrong answer
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    char x;
    cin >> n >> m;
    vector<pair<int, int>> A;
    for (int i = 0; i < n; i++) {
        int a = -1, b = -1;
        for (int j = 0; j < m; j++) {
            cin >> x;
            if (x == 'G') a = j;
            else if (x == 'S') b = j;
        }
        A.push_back({a, b});
    }
    int ans = 0;
    for (auto p : A) {
        if (p.first > p.second) {
            cout << -1 << endl;
            return 0;
        }
        ans = max(ans, p.second - p.first - 1);
    }
    cout << ans << endl;

    return 0;
}

