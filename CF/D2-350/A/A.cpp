/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 15.10.2020 08:38:30
 * Last Modified Date: 15.10.2020 08:50:11
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
    int n;
    cin >> n;
    int weeks = n / 7;
    int days = n % 7;
   
    int min_n = weeks*2;
    int max_n = weeks*2;
    if (days <= 5 && days >= 2) {
        max_n += 2;
    } else if (days == 6) {
        min_n += 1;
        max_n += 2;
    } else if (days == 7) {
        min_n += 2;
        max_n += 2;
    } else if (days == 1) {
        max_n += 1;
    }

    cout << min_n << " " << max_n << endl;

    return 0;
}

