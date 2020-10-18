/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 17.10.2020 08:35:23
 * Last Modified Date: 17.10.2020 08:52:23
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
    int n;
    cin >> n;
    if (n >= 10) {
        cout << n << "\n";
        return 0;
    }
    int last1 = n % 10;
    int last2 = (n / 10) % 10;
    dbg(last1, last2);
    // remove min
    string s = to_string(n), ans;
    if (last1 < last2) {
        ans = s.substr(0, sz(s) - 1);
    } else {
        ans = s.substr(0, sz(s) - 2) + s[sz(s) - 1];
    }

    if (ans[1] == '0') {
        cout << 0 << "\n";
    } else {
        cout << ans << "\n";
    }
    return 0;
}

