/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 04.11.2020 14:18:39 UTC+7
 * Last Modified Date: 04.11.2020 14:42:05 UTC+7
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
    string a;
    cin >> t >> sx >> sy >> ex >> ey >> a;
    int e = 0, s = 0, w = 0, n = 0;
    for (char c : a) {
        if (c == 'E') e++;
        else if (c == 'S') s++;
        else if (c == 'W') w++;
        else n++;
    }
    dbg(e, s, w, n);
    int dx = ex - sx;
    int dy = ey - sy;
    dbg(dx, dy);
    if (dx > 0 && e < dx) {
        cout << "-1\n";
        return 0;
    }
    if (dx < 0 && w < abs(dx)) {
        cout << "-1\n";
        return 0;
    }
    if (dy > 0 && n < dy) {
        cout << "-1\n";
        return 0;
    }
    if (dy < 0 && s < abs(dy)) {
        cout << "-1\n";
        return 0;
    }
    char c1 = 'E', c2 = 'N';
    if (dx < 0) c1 = 'W';
    if (dy < 0) c2 = 'S';
    dx = abs(dx);
    dy = abs(dy);
    int ans = 0;
    for (int i = 0; i < t; i++) {
        if (a[i] == c1 && dx > 0) dx--;
        else if (a[i] == c2 && dy > 0) dy--;
        ans++;
        if (dx == 0 && dy == 0) {
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}

