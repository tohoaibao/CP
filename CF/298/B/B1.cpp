/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 04.11.2020 14:48:38 UTC+7
 * Last Modified Date: 04.11.2020 14:58:51 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

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
    int t, sx, sy, ex, ey;
    string s;
    cin >> t >> sx >> sy >> ex >> ey >> s;
    int dx = ex - sx;
    int dy = ey - sy;
    char c1 = 'E', c2 = 'N';
    if (dx < 0) {c1 = 'W', dx = -dx;}
    if (dy < 0) {c2 = 'S', dy = -dy;}
    for (int i = 0; i < t; i++) {
        if (dx > 0 && s[i] == c1) dx--;
        else if (dy > 0 && s[i] == c2) dy--;
        if (dx == 0 && dy == 0) {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}

