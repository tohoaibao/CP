/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 15.10.2020 14:39:45
 * Last Modified Date: 15.10.2020 14:51:45
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
    string s;
    cin >> s;
    int n = sz(s);
    if (n < 26) {
        cout << -1 << "\n";
        return 0;
    }
    
    vector<int> cnt(26);
    int counter = 0;
    for (int i = 0; i < 26; i++) {
        if (s[i] == '?') counter++;
        cnt[s[i] - 'A']++;
        if (cnt[s[i] - 'A'] == 1) counter++;
    }

    // valid when counter == 26
    if (counter == 26) {
        
    }

    return 0;
}

