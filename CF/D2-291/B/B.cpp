/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 14.10.2020 08:00:43
 * Last Modified Date: 14.10.2020 08:38:14
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

struct point {
    int x, y;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x0, y0;
    cin >> n >> x0 >> y0;
    vector<point> A(n);
    for (auto &a : A) {
        cin >> a.x >> a.y;
    }
    // Points (x1, y1), (x2, y2), (x3, y3) same line =>
    // (x2 - x1)(y3 - y1) = (x3 - x1)(y2 - y1)
    int ans = 0;
    while (sz(A) > 0) {
        vector<int> pos = {0};
        for (int i = 1; i < sz(A); i++) {
            if ((A[0].x - x0)*(A[i].y - y0) == (A[i].x - x0)*(A[0].y - y0)) {
                pos.push_back(i);
            }
        }
        for (int i = 0; i < sz(pos); i++) {
            A.erase(A.begin() + pos[i] - i);
        }
        ans++;
    }
    cout << ans << endl;

    return 0;
}

