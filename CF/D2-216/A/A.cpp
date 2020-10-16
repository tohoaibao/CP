/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 16.10.2020 11:06:18
 * Last Modified Date: 16.10.2020 13:18:42
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
    int n, x, y, ans = 0;
    cin >> n >> x >> y;
    for (int t = 0; t < n; t++) {
        int p;
        cin >> p;
        if (p == 1) {
            if (x > 0) x--;
            else {
                ans++;
            }
        } else {
            if (y > 0) y--;
            else if (x > 0) x--;
            else {
                ans++;
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}

