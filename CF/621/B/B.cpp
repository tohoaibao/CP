/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 27.10.2020 16:00:45
 * Last Modified Date: 27.10.2020 16:18:35
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    unordered_map<int, int> mp1, mp2;
    ll ans = 0;
    while (n--) {
        int x, y;
        cin >> x >> y;
        if (mp1.find(x - y) != mp1.end()) {
            ans += mp1[x - y];
        }
        if (mp2.find(x + y) != mp2.end()) {
            ans += mp2[x + y];
        }
        mp1[x - y]++;
        mp2[x + y]++;
    }
    cout << ans << '\n';
    return 0;
}

