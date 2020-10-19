/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 19.10.2020 14:44:54
 * Last Modified Date: 19.10.2020 15:10:12
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
    int m, n;
    cin >> m >> n;
    vector<vector<int>> A(m, vector<int>(n, 1));
    vector<vector<int>> B(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (B[i][j] == 0) {
                for (int k = 0; k < n; k++) {
                    A[i][k] = 0;
                }
                for (int k = 0; k < m; k++) {
                    A[k][j] = 0;
                }
            }
        }
    }
    // from A build C
    vector<vector<int>> C(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int x = 0;
            for (int k = 0; k < n; k++) {
                if (A[i][k] == 1) {
                    x = 1;
                    break;
                }
            }
            for (int k = 0; k < m; k++) {
                if (A[k][j] == 1) {
                    x = 1;
                    break;
                }
            }
            C[i][j] = x;
        }
    }
    if (B == C) {
        cout << "YES\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << A[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "NO\n";
    }
    return 0;
}

