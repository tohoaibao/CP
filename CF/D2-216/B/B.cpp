/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 16.10.2020 09:50:13
 * Last Modified Date: 16.10.2020 10:22:23
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

void solve(int s, int k) {
    int remainder = s % k;
    for (int i = 0; i < k; i++) {
        cout << s / k + (remainder > 0) << " ";
        remainder--;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, l, r, s, sk;
    cin >> n >> k >> l >> r >> s >> sk;
    solve(sk, k);
    if (k != n) {
        solve(s - sk, n - k);
    }
    cout << "\n";

    return 0;
}

