/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 08.10.2020 15:24:44
 * Last Modified Date: 08.10.2020 16:15:13
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define EACH(x, a) for (auto& x: a)

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

string s1, s2;
int pos = 0, cnt = 0, n = 0;

void dfs(int i, int val) {
    if (i == sz(s2)) {
        if (val == pos) cnt++;
        n++;
        return;
    }
    if (s2[i] == '+') dfs(i + 1, val + 1);
    else if (s2[i] == '-') dfs(i + 1, val - 1);
    else {
        dfs(i + 1, val + 1);
        dfs(i + 1, val - 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(9);
    cin >> s1 >> s2;
    for (char c : s1) {
        if (c == '+') pos++;
        else pos--;
    }

    dfs(0, 0);

    cout << (double) cnt/n << endl;

    return 0;
}

