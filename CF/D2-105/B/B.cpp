/**
RG File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 12.10.2020 09:50:06
 * Last Modified Date: 12.10.2020 11:15:46
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
    int v1, v2, t, f, c, ans = 0;
    double s = 0.0;
    cin >> v1 >> v2 >> t >> f >> c;
    if (v2 <= v1) {
        cout << 0 << endl;
        return 0;
    }
    s = v1 * t;
    while (s < c) {
        double x = (double)s / (v2 - v1);
        s += v1 * x;
        if (s >= c) break;
        ans++;
        s += v1 * (x + f);
        if (s >= c) break;
    }
    cout << ans << endl;

    return 0;
}

