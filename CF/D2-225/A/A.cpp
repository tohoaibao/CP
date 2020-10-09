/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 08.10.2020 20:53:24
 * Last Modified Date: 08.10.2020 21:15:44
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

// https://codeforces.com/contest/384/problem/A
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    if (n & 1) {
        int x = n/2;
        cout << x*x + (x + 1) * (x + 1) << endl;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << (flag ? 'C' : '.');
                flag = !flag;
            }
            cout << endl;
        }
    } else {
        cout << (n/2)*n << endl; 
        bool flag = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << (flag ? 'C' : '.');
                flag = !flag;
            }
            flag = !flag;
            cout << endl;
        }
    }

    return 0;
}

