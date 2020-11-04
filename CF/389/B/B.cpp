/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 04.11.2020 15:24:12 UTC+7
 * Last Modified Date: 04.11.2020 15:50:41 UTC+7
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
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    vector<vector<bool>> vis(n, vector<bool>(n));
    auto solve = [&](int xTop, int yTop) {
        int xCenter = xTop + 1, yCenter = yTop;
        if (xCenter >= n || s[xCenter][yCenter] != '#' || vis[xCenter][yCenter]) return false;
        
        int xLeft = xCenter, yLeft = yCenter - 1;
        if (yLeft < 0 || s[xLeft][yLeft] != '#' || vis[xLeft][yLeft]) return false;

        int xRight = xCenter, yRight = yCenter + 1;
        if (yRight >= n || s[xRight][yRight] != '#' || vis[xRight][yRight]) return false;

        int xBot = xCenter + 1, yBot = yCenter;
        if (xBot >= n || s[xBot][yBot] != '#' || vis[xBot][yBot]) return false;

        vis[xTop][yTop] = true;
        vis[xCenter][yCenter] = true;
        vis[xLeft][yLeft] = true;
        vis[xRight][yRight] = true;
        vis[xBot][yBot] = true;
        return true;
    };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '#' && !vis[i][j]) {
                if (!solve(i, j)) {
                    puts("NO");
                    return 0;
                }
            }
        }
    }
    puts("YES");
    return 0;
}

