/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 19.10.2020 08:29:05
 * Last Modified Date: 19.10.2020 08:34:16
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
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int m = (1 << n); // 2^n
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int mn = (int)1e6, mx = 0, sum = 0, cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += A[j];
                mn = min(mn, A[j]);
                mx = max(mx, A[j]);
                cnt++;
            }
        }
        if (cnt >= 2 && mx - mn >= x && sum >= l && sum <= r) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}

