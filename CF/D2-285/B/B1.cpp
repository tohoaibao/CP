/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 15.10.2020 16:16:08
 * Last Modified Date: 15.10.2020 16:26:52
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
    int t;
    cin >> t;
    map<string, string> mp;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        if (!mp.count(s1)) {
            mp[s1] = s1;
        }
        mp[s2] = mp[s1];
        mp.erase(s1);
    }
    cout << mp.size() << endl;
    for (auto it : mp) {
        cout << it.second << " " << it.first << "\n";
    }
    return 0;
}

