/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 03.11.2020 10:43:56 UTC+7
 * Last Modified Date: 03.11.2020 10:48:20 UTC+7
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
    string s1, s2;
    cin >> s1 >> s2;
    assert(sz(s1) == sz(s2));
    int dist = 0;
    for (int i = 0; i < sz(s1); i++) {
        if (s1[i] != s2[i]) dist++;
    }
    if (dist & 1) {
        puts("impossible");
        return 0;
    }
    string ans;
    bool f = true;
    for (int i = 0; i < sz(s1); i++) {
        if (s1[i] != s2[i]) {
            ans += f ? s1[i] : s2[i];
            f = !f;
        } else {
            ans += s1[i];
        }
    }
    cout << ans << '\n';
    return 0;
}

