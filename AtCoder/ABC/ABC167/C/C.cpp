/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 20.10.2020 14:10:15
 * Last Modified Date: 20.10.2020 14:28:55
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define forn(i, a, b) for (int i = (a); i < (b); ++i)

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
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> A(n, vector<int>(m));
    vector<int> C(n);
    for (int i = 0; i < n; i++) {
        cin >> C[i];
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    // find all subset
    int ans = INT_MAX;
    int all = 1 << n;
    for (int i = 0; i < all; i++) {
        int cost = 0;
        vector<int> level(m);
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cost += C[j];
                for (int k = 0; k < m; k++) {
                    level[k] += A[j][k];
                }
            }
        }

        // check level
        bool ok = true;
        for (int j = 0; j < m; j++) {
            if (level[j] < x) {
                ok = false;
                break;
            }
        }
        if (ok) ans = min(ans, cost);
    }

    cout << (ans == INT_MAX ? -1 : ans) << '\n';

    return 0;
}

