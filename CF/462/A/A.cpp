/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 23.10.2020 16:51:52
 * Last Modified Date: 23.10.2020 19:37:41
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
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            for (int d = 0; d < 4; d++) {
                int x = i + dx[d];
                int y = j + dy[d];
                if (x >= 0 && x < n && y >= 0 && y < n && A[x][y] == 'o') cnt++;
            }
            if (cnt & 1) {
                puts("NO");
                return 0;
            }
        }
    }
    puts("YES");
    return 0;
}

