/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 30.10.2020 16:49:58
 * Last Modified Date: 30.10.2020 16:54:39
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
    vector<int> boys(367), girls(367);
    while (n--) {
        char ch;
        int a, b;
        cin >> ch >> a >> b;
        if (ch == 'M') {
            for (int i = a; i <= b; i++) {
                boys[i]++;
            }
        } else {
            for (int i = a; i <= b; i++) {
                girls[i]++;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= 366; i++) {
        ans = max(ans, 2 * min(boys[i], girls[i]));
    }
    cout << ans << '\n';
    return 0;
}

