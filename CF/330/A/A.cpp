/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 10.10.2020 14:28:35
 * Last Modified Date: 10.10.2020 14:52:36
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
    int ans = 0, cnt = 0;
    for (int i = 0; i < r; i++) {
        if (!row[i]) {
            ans += c;
            cnt++;
        }
    }
    for (int i = 0; i < c; i++) {
        if (!col[i]) {
            ans += r - cnt;
        }
    }
    cout << ans << endl;

    return 0;
}

