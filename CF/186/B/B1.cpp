/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 12.10.2020 09:12:54
 * Last Modified Date: 12.10.2020 09:23:40
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define forn(i, a, b) for (int i = (a); i < (b); ++i)
#define each(x, a) for (auto& x: a)

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
    cout << fixed << setprecision(2);
    int n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    double kk = (100 - k) / 100.0;
    vector<pair<double, int>> A(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        A[i] = {-max(a * t1 * kk + b * t2, b * t1 * kk + a * t2), i + 1};
    }
    sort(all(A));
    for (auto &a : A) {
        cout << a.second << " " << -a.first << endl;
    }
    return 0;
}

