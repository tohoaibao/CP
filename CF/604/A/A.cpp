/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 17.10.2020 09:54:45
 * Last Modified Date: 17.10.2020 10:10:40
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define forn(i, a, b) for (int i = (a); i < (b); ++i)

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
    vector<int> p = {500, 1000, 1500, 2000, 2500};
    vector<int> m(5), w(5);
    for (int &a : m) {
        cin >> a;
    }
    for (int &a : w) {
        cin >> a;
    }
    int hs, hu;
    cin >> hs >> hu;
    double ans = 0;
    for (int i = 0; i < 5; i++) {
        ans += max(p[i] * 0.3, (1.0 - m[i]/250.0) * p[i] - 50.0 * w[i]);
    }
    ans += 100 * hs;
    ans -= 50 * hu;

    cout << ans << endl;

    return 0;
}

