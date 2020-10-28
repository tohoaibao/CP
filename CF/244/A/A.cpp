/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 15.10.2020 09:26:35
 * Last Modified Date: 15.10.2020 10:34:05
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<bool> vis(n*k + 1);
    vector<int> A(k);
    for (int i = 0; i < k; i++) {
        cin >> A[i];
        vis[A[i]] = true;
    }
    int idx = 1;
    for (int i = 0; i < k; i++) {
        cout << A[i] << " ";
        int cnt = 1;
        while (cnt < n) {
            if (!vis[idx]) {
                cout << idx << " ";
                vis[idx] = true;
                cnt++;
            }
            idx++;
        }
        cout << endl;
    }
    return 0;
}

