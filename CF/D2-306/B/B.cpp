/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 19.10.2020 08:09:47
 * Last Modified Date: 19.10.2020 08:24:11
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
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    // generate all set
    int m = pow(2, n), ans = 0;
    for (int i = 0; i < m; i++) {
        vector<int> tmp;
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                tmp.push_back(A[j]);
                sum += A[j];
            }
        }
        int max_v = *max_element(all(tmp));
        int min_v = *min_element(all(tmp));
        if (max_v - min_v >= x && sum >= l && sum <= r) {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}

