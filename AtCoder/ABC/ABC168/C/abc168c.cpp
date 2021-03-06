/**
 * File              : abc168c.cpp
 * Author            : Bao To Hoai
 * Date              : 08.10.2020 09:47:39
 * Last Modified Date: 08.10.2020 10:08:32
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
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

// https://atcoder.jp/contests/abc168/tasks/abc168_c
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(20);
    int a, b, h, m;
    ld pi = 2*acos(0.0);
    cin >> a >> b >> h >> m;
    ld rad = 2*pi*(h/12.0 + (m/60.0)/12.0 - m/60.0);
    cout << (ld)sqrt(a*a + b*b - 2*a*b*cos(rad)) << endl;

    return 0;
}

