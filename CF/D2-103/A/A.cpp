/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 11.10.2020 19:35:13
 * Last Modified Date: 11.10.2020 20:00:37
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define forn(i, a, b) for (int i = (a); i < (b); ++i)
#define each(x, a) for (auto& x: a)

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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x, n, mxm = INT_MIN, mnm = INT_MAX, max_idx = 0, min_idx = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > mxm) {
            mxm = x;
            max_idx = i;
        }
        if (x <= mnm) {
            mnm = x;
            min_idx = i;
        }
    }
    ans = max_idx + n - min_idx - 1;
    if (max_idx > min_idx) ans--;
    cout << ans << endl;

    return 0;
}

