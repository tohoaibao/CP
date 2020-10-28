/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 27.10.2020 14:58:31
 * Last Modified Date: 27.10.2020 15:06:00
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
    string a, b;
    cin >> a >> b;
    int n1 = sz(a), n2 = sz(b);
    int ans = 0;
    for (int i = 0; i <= n2 - n1; i++) {
        string sub = b.substr(i, n1);
        for (int j = 0; j < n1; j++) {
            int x = a[j] - '0';
            int y = sub[j] - '0';
            ans += abs(x - y);
        }
    }
    cout << ans << '\n';
    return 0;
}

