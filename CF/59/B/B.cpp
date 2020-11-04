/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 04.11.2020 10:52:07 UTC+7
 * Last Modified Date: 04.11.2020 11:05:07 UTC+7
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
    int ans = 0;
    int min_old = 101, cnt = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans += x;
        if (x & 1) {
            cnt++;
            min_old = min(min_old, x);
        }
    }
    if (cnt == 0) {
        cout << "0\n";
    } else {
        cout << (cnt & 1 ? ans : ans - min_old) << '\n';
    }
    return 0;
}

