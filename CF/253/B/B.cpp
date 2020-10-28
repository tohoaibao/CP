/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 14.10.2020 09:29:03
 * Last Modified Date: 14.10.2020 09:46:38
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
const int INF = (int)1e9;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    int n;
    cin >> n;
    vector<int> A(n);
    for (int &a : A) {
        cin >> a;
    }
    sort(all(A));
    int ans = INF;
    for (int i = 0; i < n; i++) {
        int val = 2*A[i] + 1;
        int pos = A.end() - lower_bound(all(A), val);
        ans = min(ans, pos + i);
    }
    cout << ans << endl;

    return 0;
}

