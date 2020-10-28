/**
 * File              : B2.cpp
 * Author            : Bao To Hoai
 * Date              : 13.10.2020 10:35:43
 * Last Modified Date: 13.10.2020 13:02:35
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define forn(i, a, b) for (int i = (a); i < (b); ++i)

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
const int MAX_N = (int)1e5 + 1;

int n;
vector<int> A[MAX_N];
vector<pair<int, int>> ans;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A[x].push_back(i);
    }
    for (int i = 1; i < MAX_N; i++) {
        if (sz(A[i]) == 1) {
            ans.push_back({i, 0});
        } else if (sz(A[i]) > 1) {
            int d = A[i][1] - A[i][0];
            bool good = true;
            for (int j = 2; j < sz(A[i]); j++) {
                if (A[i][j] - A[i][j - 1] != d) {
                    good = false;
                    break;
                }
            }

            if (good) {
                ans.push_back({i, d});
            }
        }
    }
    cout << ans.size() << "\n";
    for (auto &p : ans) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}
