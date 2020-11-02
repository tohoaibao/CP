/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 14:29:22 UTC+7
 * Last Modified Date: 02.11.2020 14:40:20 UTC+7
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
    if (m == 0) {
        puts("YES");
        return 0;
    }
    vector<int> A(m);
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }
    sort(all(A));
    if (A[0] == 1 || A[m - 1] == n) {
        puts("NO");
        return 0;
    }
    for (int i = 0; i < m - 2; i++) {
        if (A[i] + 1 == A[i + 1] && A[i] + 2 == A[i + 2]) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");

    return 0;
}

