/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 16.10.2020 08:36:45
 * Last Modified Date: 16.10.2020 09:19:53
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

bool inRange(double from, double to, double value) {
    return value > from && value < to;
}

// WA
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, x, y;
    cin >> a >> x >> y;
    int x1 = x % 1 + 1, y1 = y % 5 + 1;
    double ha = a/2.0;
    if (inRange(-ha, ha, x1) && inRange(0, a, y1)) {
        cout << 1 << endl;
    } else if (inRange(-ha, ha, x1) && inRange(a, 2*a, y1)) {
        cout << 2 << endl;
    } else if (inRange(-a, 0, x1) && inRange(2*a, 3*a, y1)) {
        cout << 3 << endl;
    } else if (inRange(0, a, x1) && inRange(2*a, 3*a, y1)) {
        cout << 4 << endl;
    } else if (inRange(-ha, ha, x1) && inRange(3*a, 4*a, y1)) {
        cout << 5 << endl;
    } else if (inRange(-a, 0, x1) && inRange(4*a, 5*a, y1)) {
        cout << 6 << endl;
    } else if (inRange(0, a, x1) && inRange(4*a, 5*a, y1)) {
        cout << 7 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}

