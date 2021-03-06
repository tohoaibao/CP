/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 26.10.2020 11:03:11
 * Last Modified Date: 26.10.2020 11:15:14
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

double getDist(vector<int> &A, vector<int> &B) {
    int sum = 0;
    for (int i = 0; i < sz(A); i++) {
        sum += (A[i] - B[i]) * (A[i] - B[i]);
    }
    return sqrt(sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, d;
    cin >> n >> d;
    vector<vector<int>> A(n, vector<int>(d));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            cin >> A[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double x = getDist(A[i], A[j]);
            if (x == (int)x) ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}

