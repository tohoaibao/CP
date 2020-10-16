/**
 * File              : A1.cpp
 * Author            : Bao To Hoai
 * Date              : 16.10.2020 16:28:47
 * Last Modified Date: 16.10.2020 17:05:33
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> A(n);
    for (string &s : A) {
        cin >> s;
    }
    int row_start = -1;
    bool flag = true;
    for (int i = 0; i < n && flag; i++) {
        for (int j = 0; j < m && flag; j++) {
            if (A[i][j] == '*') {
                row_start = i;
                flag = false;
            }
        }
    }
    int row_end = -1;
    flag = true;
    for (int i = n - 1; i >= 0 && flag; i--) {
        for (int j = 0; j < m && flag; j++) {
            if (A[i][j] == '*') {
                row_end = i;
                flag = false;
            }
        }
    }
    int col_begin = -1;
    flag = true;
    for (int i = 0; i < m && flag; i++) {
        for (int j = 0; j < n && flag; j++) {
            if (A[j][i] == '*') {
                col_begin = i;
                flag = false;
            }
        }
    }
    int col_end = -1;
    flag = true;
    for (int i = m - 1; i < m && flag; i--) {
        for (int j = 0; j < n && flag; j++) {
            if (A[j][i] == '*') {
                col_end = i;
                flag = false;
            }
        }
    }
    dbg(row_start, row_end, col_begin, col_end);
    for (int i = row_start; i <= row_end; i++) {
        for (int j = col_begin; j <= col_end; j++) {
            cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}

