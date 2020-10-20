/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 20.10.2020 09:42:45
 * Last Modified Date: 20.10.2020 09:55:07
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

// TLE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> A(n);
    int max_idx = 0;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        if (A[i] > A[max_idx]) {
            max_idx = i;
        }
    }
    int end = n - 1;
    ll ans = 0;
    while (end > 0) {
        for (int i = max_idx; i <= end; i++) {
            ans += A[max_idx] - A[i];
        }
        end = max_idx - 1;
        max_idx = 0;
        for (int i = 0; i <= end; i++) {
            if (A[i] > A[max_idx]) {
                max_idx = i;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}

