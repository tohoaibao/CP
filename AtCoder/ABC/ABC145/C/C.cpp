/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 22.10.2020 15:55:58
 * Last Modified Date: 22.10.2020 16:11:40
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
    cout << fixed << setprecision(9);
    int n;
    cin >> n;
    vector<pair<int, int>> A(n);
    for (auto &a : A) {
        cin >> a.first >> a.second;
    }
    sort(all(A));
    int cnt = 0;
    double sum = 0.0;
    do {
        for (int i = 0; i < n - 1; i++) {
            sum += sqrt(pow(A[i].first - A[i + 1].first, 2) + pow(A[i].second - A[i + 1].second, 2));
        }
        cnt++;
    } while (next_permutation(all(A)));
    cout << sum / cnt << '\n';
    return 0;
}
