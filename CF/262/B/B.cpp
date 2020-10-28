/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 12.10.2020 13:10:18
 * Last Modified Date: 12.10.2020 14:28:54
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
    int n, k;
    ll sum = 0;
    cin >> n >> k;
    vector<int> A(n);
    for (int &a : A) {
        cin >> a;
    }
    for (int &a : A) {
        if (a < 0 && k > 0) {
            a *= -1;
            k--;
        } else break;
    }
    if (k > 0) {
        sort(all(A));
        if (k & 1) A[0] *= -1;
    }
    for (int &a : A) {
        sum += a;
    }
    cout << sum << endl;

    return 0;
}

