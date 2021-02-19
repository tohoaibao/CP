/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 15:25:51 UTC+7
 * Last Modified Date: 19.02.2021 15:38:16 UTC+7
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
    int h, w;
    cin >> h >> w;
    vector<string> A(h);
    for (string &a : A) cin >> a;
    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w - 1; j++) {
            if (A[i][j] == '.' && A[i][j + 1] == '.') ans++;
        }
    }
    dbg(ans);
    for (int j = 0; j < w; j++) {
        for (int i = 0; i < h - 1; i++) {
            if (A[i][j] == '.' && A[i + 1][j] == '.') ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}

