/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 09.10.2020 10:12:23
 * Last Modified Date: 09.10.2020 10:20:37
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

// https://codeforces.com/contest/215/problem/B
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(9);
    int n, m, k, x;
    int r1 = INT_MIN, p1 = INT_MIN, p2 = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        r1 = max(r1, x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        p1 = max(p1, x);
    }

    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> x;
        p2 = min(p2, x);
    }
    
    int a, b;
    cin >> a >> b;
    
    cout << (double)r1 * sqrt((double)b * p1 / (a * p2 + b * p1)) << endl;

    return 0;
}

