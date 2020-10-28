/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 12.10.2020 15:40:20
 * Last Modified Date: 12.10.2020 16:33:48
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<string, string>> A(n);
    for (auto &a: A) {
        cin >> a.first >> a.second;
    }

    // transform
    // rat (0) -> woman, child (1) -> man (2) -> captain (3)
    // type, idx
    vector<pair<int, int>> B(n);
    for (int i = 0; i < n; i++) {
        if (A[i].second == "rat") {
            B[i].first = 0;
        } else if (A[i].second == "woman" || A[i].second == "child") {
            B[i].first = 1;
        } else if (A[i].second == "man") {
            B[i].first = 2;
        } else {
            B[i].first = 3;
        }
        B[i].second = i;
    }
    sort(all(B));
    for (auto &p : B) {
        cout << A[p.second].first << endl;
    }

    return 0;
}

