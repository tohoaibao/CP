/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 26.10.2020 15:27:50
 * Last Modified Date: 26.10.2020 15:54:50
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
    vector<pair<int, int>> v1, v2;
    int sum = 0;
    while (n--) {
        int x, y;
        cin >> x >> y;
        sum += y;
        if (x < 0) v1.push_back({-x, y});
        else if (x > 0) v2.push_back({x, y});
    }
    sort(all(v1)), sort(all(v2));
    int ans = 0;
    int min_v = min(sz(v1), sz(v2) + 1);
    for (int i = 0; i < min_v; i++) {
        ans += v1[i].second;
    }
    min_v = min(sz(v1) + 1, sz(v2));
    for (int i = 0; i < min_v; i++) {
        ans += v2[i].second;
    }
    cout << ans << '\n';
    return 0;
}

