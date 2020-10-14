/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 13.10.2020 15:05:42
 * Last Modified Date: 13.10.2020 16:02:58
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

int d(int n, vector<int> &A) {
    if (A[n] != 0) return A[n];
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) cnt++;
            else cnt += 2;
        }
    }
    A[n] = cnt;
    return A[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    const int MOD = 1073741824;
    cin >> a >> b >> c;
    vector<int> A(a*b*c + 1);
    ll sum = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                sum = (sum + d(i*j*k, A)) % MOD;
            }
        }
    }
    cout << sum << endl;

    return 0;
}

