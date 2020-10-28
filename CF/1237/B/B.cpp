/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 28.10.2020 14:34:47
 * Last Modified Date: 28.10.2020 15:04:39
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        --a[i];
    }
    vector<int> pos(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        --b[i];
        pos[b[i]] = i;
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        c[i] = pos[a[i]];
    }
    int mx = -1, ans = 0;
    for (int i = 0; i < n; i++) {
        if (c[i] > mx) {
            mx = c[i];
        } else {
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}

