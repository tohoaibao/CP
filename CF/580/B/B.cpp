/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 27.10.2020 16:37:41
 * Last Modified Date: 28.10.2020 08:03:44
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
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> A(n);
    for (auto &a : A) {
        cin >> a.first >> a.second;
    }
    sort(all(A));
    vector<ll> sum(n + 1);
    for (int i = 0; i < n; i++) {
        sum[i + 1] = sum[i] + A[i].second;
    }
    int r = 0;
    ll ans = 0;
    for (int l = 0; l < n; l++) {
        while (r < n && A[r].first < A[l].first + d) r++;
        ans = max(ans, sum[r] - sum[l]);
    }
    cout << ans << '\n';
    return 0;
}

