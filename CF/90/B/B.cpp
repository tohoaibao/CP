/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 29.10.2020 16:23:13
 * Last Modified Date: 29.10.2020 16:30:09
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
    int n, m;
    cin >> n >> m;
    vector<string> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    vector<vector<int>> cnt1(n, vector<int> (26));
    vector<vector<int>> cnt2(m, vector<int> (26));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cnt1[i][A[i][j] - 'a']++;
            cnt2[j][A[i][j] - 'a']++;
        }
    }
    string ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (cnt1[i][A[i][j] - 'a'] == 1 && cnt2[j][A[i][j] - 'a'] == 1)
                ans += A[i][j];
        }
    }
    cout << ans << '\n';
    return 0;
}

