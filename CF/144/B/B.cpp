/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 13.10.2020 13:32:55
 * Last Modified Date: 13.10.2020 14:14:25
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

struct pp {
    int x, y, r;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int xa, ya, xb, yb, n;
    cin >> xa >> ya >> xb >> yb;
    cin >> n;
    vector<pp> A(n);
    for (auto &p : A) {
        cin >> p.x >> p.y >> p.r;
    }
    if (xa > xb) swap(xa, xb);
    if (ya > yb) swap(ya, yb);
    
    // (xa, ya), (xa, yb), (xb, ya), (xb, yb) --> 4 vertexes
    vector<pair<int, int>> B;
    // scan in 4 edge to find location
    // (xa, y), (xb, y)
    for (int y = ya; y <= yb; y++) {
        B.push_back({xa, y});
        B.push_back({xb, y});
    }
    // (x, ya), (x, yb)
    for (int x = xa + 1; x <= xb - 1; x++) {
        B.push_back({x, ya});
        B.push_back({x, yb});
    }
    ll ans = 0;
    for (auto &p1 : B) {
        bool flag = false;
        for (auto &p2 : A) {
            if (sqrt(pow(p1.first - p2.x, 2) + pow(p1.second - p2.y, 2)) <= p2.r) {
                flag = true;
                break;
            }
        }
        if (!flag) ans++;
    }
    cout << ans << endl;
    return 0;
}

