/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 22.10.2020 14:00:40
 * Last Modified Date: 22.10.2020 14:11:37
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
    string s;
    cin >> s;
    int ans = -1;
    if (s == "SUN") {
        ans = 7;
    } else if (s == "MON") {
        ans = 6;
    } else if (s == "TUE") {
        ans = 5;
    } else if (s == "WED") {
        ans = 4;
    } else if (s == "THU") {
        ans = 3;
    } else if (s == "FRI") {
        ans = 2;
    } else if (s == "SAT") {
        ans = 1;
    }
    cout << ans << '\n';
    return 0;
}

