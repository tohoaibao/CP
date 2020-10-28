/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 09.10.2020 08:34:19
 * Last Modified Date: 09.10.2020 09:02:08
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

// https://codeforces.com/contest/469/problem/B
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vector<pair<int, int>> A(p), B(q);
    for (int i = 0; i < p; i++) {
        cin >> A[i].first >> A[i].second;
    }
    for (int i = 0; i < q; i++) {
        cin >> B[i].first >> B[i].second;
    }
    // [a, b] vs [c, d]
    // a <= d && c <= b
    int ans = 0;
    for (int i = l; i <= r; i++) {
        bool flag = false;
        for (auto x : A) {
            for (auto y : B) {
                int a = x.first;
                int b = x.second;
                int c = y.first + i;
                int d = y.second + i;
                if (a <= d && c <= b) {
                    flag = true;
                    break;
                }
            }
           if (flag) break;
        }
        if (flag) ans++;
    }
    cout << ans << endl;

    return 0;
}

