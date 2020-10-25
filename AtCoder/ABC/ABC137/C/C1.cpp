/**
 * File              : C1.cpp
 * Author            : Bao To Hoai
 * Date              : 24.10.2020 17:11:50
 * Last Modified Date: 24.10.2020 17:14:13
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
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    ll ans = 0;
    while (n--) {
        string s;
        cin >> s;
        vector<int> A(26);
        for (char c : s) {
            A[c - 'a']++;
        }
        string ss = to_string(A);
        if (mp.find(ss) != mp.end()) {
            ans += mp[ss];
        }
        mp[ss]++;
    }
    cout << ans << '\n';
    return 0;
}

