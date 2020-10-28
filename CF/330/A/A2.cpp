/**
 * File              : A2.cpp
 * Author            : Bao To Hoai
 * Date              : 10.10.2020 16:13:04
 * Last Modified Date: 10.10.2020 16:20:44
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    char ch;
    vector<bool> row(r), col(c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> ch;
            if (ch == 'S') {
                row[i] = true;
                col[j] = true;
            }
        }
    }
    int x = 0, y = 0;
    for (int i = 0; i < r; i++) {
        if (row[i]) x++;
    }
    for (int i = 0; i < c; i++) {
        if (col[i]) y++;
    }
    cout << r * c - x * y << endl;

    return 0;
}

