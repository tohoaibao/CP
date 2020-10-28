/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 17.10.2020 19:33:28
 * Last Modified Date: 17.10.2020 19:43:32
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
    int h1, m1, h2, m2;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);

    int h = 0, m = 0;
    if (h1 >= h2) {
        h = h1 - h2;
    } else {
        h = h1 + 24 - h2;
    }
    if (m1 >= m2) {
        m = m1 - m2;
    } else {
        m = m1 + 60 - m2;
        h = (h - 1 + 24) % 24;
    }
    printf("%02d:%02d", h, m);
    return 0;
}

