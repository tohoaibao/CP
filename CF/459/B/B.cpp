/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 08:42:03 UTC+7
 * Last Modified Date: 02.11.2020 09:09:17 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

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
    ll n;
    cin >> n;
    vector<int> A(n);
    int mx = 0, mn = 1e9;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        mx = max(mx, A[i]);
        mn = min(mn, A[i]);
    }
    ll cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == mx) cnt1++;
        if (A[i] == mn) cnt2++;
    }
    cout << mx - mn << " ";
    if (mx == mn) {
        cout << n * (n - 1) / 2 << '\n';
    } else {
        cout << cnt1 * cnt2 << '\n';
    }
    return 0;
}

