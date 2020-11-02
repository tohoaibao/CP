/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 15:12:58 UTC+7
 * Last Modified Date: 02.11.2020 16:18:28 UTC+7
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

vector<int> A(5);

ll lcm (ll a, ll b) {
    return a / __gcd(a, b) * b;
}

// Count numbers not divisible in range [1 .. n]
ll solve(int n) {
    ll res = 0;
    // enumerate all subsets
    int all = 1 << 5;
    for (int i = 0; i < all; i++) {
        // lcm of the number in the set
        ll l = 1;
        int sign = 1;
        for (int j = 0; j < 5; j++) {
            if (i & (1 << j)) {
                sign = -sign;
                l = lcm(l, A[j]);
            }
        }
        res += sign * (n / l);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m, a, d;
        cin >> n >> m >> a >> d;
        A[0] = a;
        A[1] = a + d;
        A[2] = a + 2 * d;
        A[3] = a + 3 * d;
        A[4] = a + 4 * d;
        cout << solve(m) - solve(n - 1) << '\n';
    }
    return 0;
}

