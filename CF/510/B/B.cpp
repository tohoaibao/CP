/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 27.10.2020 11:00:44
 * Last Modified Date: 27.10.2020 11:29:53
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

int n, m;
string G[51];
bool vis[51][51];
bool findCycle = false;

const int dx[] = {0, 0, -1, 1};
const int dy[] = {1, -1, 0, 0};

void dfs(int x, int y, int fromX, int fromY, char color) {
    if (G[x][y] != color) return;
    if (vis[x][y]) {
        findCycle = true;
        return;
    }
    vis[x][y] = true;
    for (int d = 0; d < 4; d++) {
        int nextX = x + dx[d];
        int nextY = y + dy[d];
        if (nextX < 0 || nextX >= n || nextY < 0 || nextY >= m || (nextX == fromX && nextY == fromY))
            continue;
        dfs(nextX, nextY, x, y, color);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> G[i];
    }
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j]) dfs(i, j, -1, -1, G[i][j]);
        }
    }
    cout << (findCycle ? "Yes" : "No") << '\n';
    return 0;
}

