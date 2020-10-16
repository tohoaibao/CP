/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 16.10.2020 13:32:50
 * Last Modified Date: 16.10.2020 14:10:36
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

// stupid solution
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> A(n);
    for (int &a : A) {
        cin >> a;
    }
    int ans = INT_MAX;
    for (int i = 1; i < n - 1; i++) {
        vector<int> B = A;
        B.erase(B.begin() + i);
        int max_diff = INT_MIN;
        for (int j = 1; j < sz(B); j++) {
            max_diff = max(max_diff, B[j] - B[j - 1]);
        }
        ans = min(ans, max_diff);
    }
    cout << ans << endl;

    return 0;
}

