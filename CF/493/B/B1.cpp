/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 27.10.2020 14:40:45
 * Last Modified Date: 27.10.2020 14:47:24
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
    int n, x;
    cin >> n;
    vector<int> first, second;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > 0) first.push_back(x);
        else if (x < 0) second.push_back(-x);
        sum += x;
    }
    if (sum > 0) {
        cout << "first\n";
    } else if (sum < 0) {
        cout << "second\n";
    } else {
        int l = min(sz(first), sz(second));
        for (int i = 0; i < l; i++) {
            if (first[i] > second[i]) {
                cout << "first\n";
                return 0;
            } else if (first[i] < second[i]) {
                cout << "second\n";
                return 0;
            }
        }
        if (sz(first) > sz(second)) {
            cout << "first\n";
        } else if (sz(first) < sz(second)) {
            cout << "second\n";
        } else {
            cout << (x > 0 ? "first" : "second") << '\n';
        }
    }
    return 0;
}

