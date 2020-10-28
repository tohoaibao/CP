/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 27.10.2020 09:30:25
 * Last Modified Date: 27.10.2020 09:35:15
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> S(n);
    vector<int> P(n), I(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i] >> P[i];
        I[i] = i;
    }
    sort(all(I), [&](int o1, int o2){
        if (S[o1] == S[o2]) {
            return P[o1] > P[o2];
        }
        return S[o1] < S[o2];
    });
    for (int i : I) {
        cout << i + 1 << '\n';
    }
    return 0;
}

