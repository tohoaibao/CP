/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 09.10.2020 16:29:25
 * Last Modified Date: 09.10.2020 16:48:15
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

// TLE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k, x, y, dx, dy, ans = 0;
    cin >> n >> m;
    cin >> x >> y;
    x--, y--;
    cin >> k;
    while (k--) {
        cin >> dx >> dy;
        int a = x + dx, b = y + dy;
        while (a >= 0 && a < n && b >= 0 && b < m) {
            x = x + dx;
            y = y + dy;
            a = x + dx;
            b = y + dy;
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}

