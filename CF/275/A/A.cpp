/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 11.10.2020 14:39:10
 * Last Modified Date: 11.10.2020 14:56:49
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define forn(i, a, b) for (int i = (a); i < (b); ++i)
#define each(x, a) for (auto& x: a)

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

const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>> A(3, vector<int>(3, 1));
    int a;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a;
            if (a & 1) {
                A[i][j] = 1 - A[i][j];
                for (int d = 0; d < 4; d++) {
                    int x = i + dx[d];
                    int y = j + dy[d];
                    if (x >= 0 && x < 3 && y >= 0 && y < 3) {
                        A[x][y] = 1 - A[x][y];
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0 ; j < 3; j++) {
            cout << A[i][j];
        }
        cout << endl;
    }
    return 0;
}

