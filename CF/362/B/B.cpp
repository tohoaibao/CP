/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 14:16:18 UTC+7
 * Last Modified Date: 02.11.2020 14:25:29 UTC+7
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
    vector<bool> A(n);
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        --x;
        A[x] = true;
    }
    if (A[0] || A[n - 1]) {
        puts("NO");
        return 0;
    }
    int left = 0;
    while (left + 1 < n) {
        if (left + 3 < n && !A[left + 3]) {
            left = left + 3;
        } else if (left + 2 < n && !A[left + 2]) {
            left = left + 2;
        } else if (left + 1 < n && !A[left + 1]) {
            left = left + 1;
        } else {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}

