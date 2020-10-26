/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 26.10.2020 08:58:48
 * Last Modified Date: 26.10.2020 09:08:52
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
    int a1, a2;
    cin >> a1 >> a2;
    if (a1 == 1 && a2 == 1) {
        cout << "0\n";
        return 0;
    }
    for (int i = 1; ; i++) {
        if (a1 < a2) {
            a1 += 1;
            a2 -= 2;
        } else {
            a2 += 1;
            a1 -= 2;
        }
        if (a1 <= 0 || a2 <= 0) {
            cout << i << '\n';
            return 0;
        }
    } 
    return 0;
}

