/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 19.10.2020 11:26:37
 * Last Modified Date: 19.10.2020 13:33:54
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

bool isBeautiful(string s) {
    if (s == "0" || s == "1") return true;
    if (s[0] != '1') return false;
    for (int i = 1; i < sz(s); i++) {
        if (s[i] != '0') return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, l = 0;
    cin >> n;
    string ans;
    while (n--) {
        string s;
        cin >> s;
        if (s == "0") {
            cout << "0\n";
            return 0;
        }
        if (isBeautiful(s)) {
            l += sz(s) - 1;
        } else {
            ans = s;
        }
    }
    if (ans.empty()) ans = "1";
    while (l--) {
        ans += "0";
    }
    cout << ans << "\n";
    return 0;
}

