/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 04.11.2020 08:11:45 UTC+7
 * Last Modified Date: 04.11.2020 10:35:12 UTC+7
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

// forth right left
const int dx[] = {-1, 0, 0};
const int dy[] = {0, 1, -1};
string dir[] = {"forth", "right", "left"};
string path = "IEHOVA#";

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int m, n;
        cin >> m >> n;
        vector<string> A(m);
        int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
        for (int i = 0; i < m; i++) {
            cin >> A[i];
            for (int j = 0; j < n; j++) {
                if (A[i][j] == '@') {
                    x1 = i;
                    y1 = j;
                } else if (A[i][j] == '#') {
                    x2 = i;
                    y2 = j;
                }
            }
        }
        string ans;
        int idx = 0;
        while (x1 != x2 || y1 != y2) {
            for (int d = 0; d < 3; d++) {
                int x = x1 + dx[d];
                int y = y1 + dy[d];
                if (x >= 0 && x < m && y >= 0 && y < n && A[x][y] == path[idx]) {
                    x1 = x;
                    y1 = y;
                    ans += dir[d];
                    if (A[x][y] != '#') ans += " ";
                    idx++;
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

