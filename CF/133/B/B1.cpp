/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 11:01:57 UTC+7
 * Last Modified Date: 02.11.2020 11:09:47 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

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
    int ans = 0;
    const int mod = (int)1e6 + 3;
    for (char c : s) {
        ans *= 16;
        if (c == '>') {
            ans += 8;
        } else if (c == '<') {
            ans += 9;
        } else if (c == '+') {
            ans += 10;
        } else if (c == '-') {
            ans += 11;
        } else if (c == '.') {
            ans += 12;
        } else if (c == ',') {
            ans += 13;
        } else if (c == '[') {
            ans += 14;
        } else if (c == ']') {
            ans += 15;
        } else {
            assert(false);
        }
        ans %= mod;
    }
    cout << ans << '\n';
    return 0;
}

