/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 18.02.2021 11:09:21 UTC+7
 * Last Modified Date: 18.02.2021 13:14:26 UTC+7
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
    int n;
    cin >> n;
    vector<pair<int, int>> p;
    int l = (1 << n);
    for (int i = 0; i < l; i++) {
        int x;
        cin >> x;
        p.push_back({x, i + 1});
    }
    while (sz(p) > 2) {
        vector<pair<int, int>> q;
        for (int i = 0; i < sz(p); i += 2) {
            if (p[i].first > p[i + 1].first) q.push_back(p[i]);
            else q.push_back(p[i + 1]);
        }
        p = q;
    }
    if (p[0].first < p[1].first) cout << p[0].second << '\n';
    else cout << p[1].second << '\n';
    return 0;
}

