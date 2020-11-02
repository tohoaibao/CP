/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 10:29:08 UTC+7
 * Last Modified Date: 02.11.2020 10:58:10 UTC+7
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

string getCode(char c) {
    string res;
    if (c == '>') {
        res = "1000";
    } else if (c == '<') {
        res = "1001";
    } else if (c == '+') {
        res = "1010";
    } else if (c == '-') {
        res = "1011";
    } else if (c == '.') {
        res = "1100";
    } else if (c == ',') {
        res = "1101";
    } else if (c == '[') {
        res = "1110";
    } else if (c == ']') {
        res = "1111";
    } else {
        assert(false);
    }
    return res;
}

const ll mod=1e6 + 3;
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    string ss;
    for (char c : s) {
        ss += getCode(c);
    }
    ll ans = 0;
    int n = sz(ss);
    for (int i = 0; i < n; i++) {
        if (ss[i] == '1') {
            ans = (ans + powmod(2, n - i - 1)) % mod;
        }
    }
    cout << ans << '\n';
    return 0;
}

