/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 03.11.2020 09:42:38 UTC+7
 * Last Modified Date: 03.11.2020 09:46:26 UTC+7
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
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (A[i][m - 1] != 'D') ans++;
        }
        for (int j = 0; j < m - 1; j++) {
            if (A[n - 1][j] != 'R') ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}

