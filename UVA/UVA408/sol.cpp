/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 23.10.2020 08:00:05
 * Last Modified Date: 23.10.2020 10:07:38
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
    int a, b;
    while (cin >> a) {
        cin >> b;
        vector<int> seed(b);
        vector<bool> vis(b);
        bool f = true;
        for (int i = 1; i < b; i++) {
            if (vis[seed[i]]) {
                f = false;
                break;
            }
            seed[i] = (seed[i - 1] + a) % b;
            vis[seed[i]] = true;
        }
        cout << right << setw(10) << a << setw(10) << b << left << setw(4) << " " << (f ? "Good Choice" : "Bad Choice") << '\n';
        cout << '\n';
    }
    return 0;
}

