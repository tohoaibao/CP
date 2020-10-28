/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 10.10.2020 10:13:23
 * Last Modified Date: 10.10.2020 10:55:31
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
    int n, s, t, ans1 = 0, ans2 = 0;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> s >> t;
    s--, t--;
    if (s == t) {
        cout << 0 << endl;
        return 0;
    }
    if (s > t) swap(s, t);
    for (int i = s; i < t; i++) {
        ans1 += A[i];
    }
    for (int i = s - 1; i >= 0; i--) {
        ans2 += A[i];
    }
    for (int i = n - 1; i >= t; i--) {
        ans2 += A[i];
    }
    cout << min(ans1, ans2) << endl;

    return 0;
}

